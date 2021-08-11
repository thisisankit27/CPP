#include <stdio.h>

int main() {
	int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int key;
    scanf("%d",&key);
    int first = 0, last=n-1;
    int middle = (first+last)/2;

    while (first <= last) {
        if (ar[middle] < key)
            first = middle + 1;
        else if (ar[middle] == key) {
            printf("%d found at location %d.\n", key, middle);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", key);
	return 0;
}

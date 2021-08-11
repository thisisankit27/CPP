#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
	int counter=0;
    while(counter<n-1){
    for(int i=0;i<n-1;i++){
        if(ar[i]>ar[i+1]){
            int temp=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=temp;
        }
    }
    counter++;
    }
    printf("Smallest= %d\nLargest= %d",ar[0],ar[n-1]);
	return 0;
}
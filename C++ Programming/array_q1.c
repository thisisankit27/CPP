#include <stdio.h>
#define INT_MAX 999999

int main() {
	int n;
	scanf("%d",&n);
	int ar[n],max=0,min=INT_MAX;
	for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
	    if(ar[i]>max)
	        max=ar[i];
	    if(ar[i]<min)
	        min=ar[i];
	}
	printf("%d\n%d",max,min);
	return 0;
}
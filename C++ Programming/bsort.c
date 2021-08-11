#include <stdio.h>
#include <stdlib.h>

int bsort(int n,int ar[]){
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
    for(int i=0;i<n;i++)
        printf("%d",ar[i]);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    bsort(n,ar);
    return 0;
}

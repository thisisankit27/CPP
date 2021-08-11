#include <stdio.h>
#include <stdlib.h>

int ssort(int n,int ar[]){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
.................................................................................................................................................            if(ar[j]<ar[i]) {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
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
    ssort(n,ar);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int isort(int n,int ar[]){
    for(int i=0;i<n;i++){
        int current=ar[i];
        int j=i-1;
        while(ar[j]>current && j>=0){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=current;
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
    isort(n,ar);
    return 0;
}

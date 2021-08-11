#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int max=ar[0];
    for(int i=0;i<n;i++){
        if(max<ar[i]) max=ar[i];
        printf("index(%d) - %d\n",i,max);
    }
    return 0;
}

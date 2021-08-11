//subarrays sum.
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){
        int sub_sum=0;
        for(int j=i;j<n;j++){
            sub_sum+=ar[j];
            printf("%d\n",sub_sum);
        }
    }
    return 0;N
}

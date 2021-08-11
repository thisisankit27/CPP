#include <stdio.h>

int linersearch(int key,int n,int a[]){
    int flag=0;
    for(int i=1;i<=n;i++){
        if(key==a[i]){
            printf("%d",i);
            flag++;
            break;
        } 
    }
    if(flag==0)
        printf("No Such Number");
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",&key);
    linersearch(key,n,a);
}
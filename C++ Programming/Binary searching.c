#include <stdio.h>

int search(int key,int n,int ar[]){
    int s=0,e=n;
    int mid;
    for(int i=0;i<n;i++){
    mid=(s+e)/2;
    if(ar[mid]==key) return mid;
    else if(ar[mid]>key) e=mid-1;
    else s=mid+1;
    }
}

int main(){
int n=5;
int ar[n];
for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
}
int key;
scanf("%d",&key);
printf("%d",search(key,n,ar));
}

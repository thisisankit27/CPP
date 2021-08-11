//Find a pair with the given sum in an array
#include <iostream>

using namespace std;

int sort(int ar[],int n,int sum);
int search(int ar[],int n,int sum);

int main(){
    int ar[] = { 8, 7, 2, 5, 3, 1 };
    int sum=10;
    sort(ar,6,sum);
    return 0;
}

int sort(int ar[],int n,int sum){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[i]) {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    search(ar,6,sum);
    return 0;
}

int search(int ar[],int n,int sum){
    int l=0, h=n-1;
    while(l<h){
        if(ar[l]+ar[h]==sum){
            printf("Pair found (%d,%d)\n",ar[l],ar[h]);
        }
        (ar[l]+ar[h]>sum)?h--:l++;
    }
    return 0;
}

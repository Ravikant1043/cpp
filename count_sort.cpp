#include<iostream>
using namespace std;
void count_sort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        if(k>arr[i])
        k=arr[i];
    }

    int count[k]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i=0;i<k;i++){
        count[i+1]+=count[i];
    }
    int out[n];
    for(int i=n-1;i>=0;i--){
        out[--count[arr[i]]]=arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]=out[i];
    }
}
int main(){

    int a[]={90,8,7,65,5};
    count_sort(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
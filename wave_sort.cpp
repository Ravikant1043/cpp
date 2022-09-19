#include<iostream>
using namespace std;

void swap(int a[],int i,int j){
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}

void wave_sort(int a[],int n){
    for(int i=1;i<n;i+=2){
        if(a[i]>a[i-1]){
            swap(a,i,i-1);
        }
        if(a[i+1]<a[i]){
            swap(a,i,i+1);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    wave_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
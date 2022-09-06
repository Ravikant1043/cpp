#include<iostream>
using namespace std;
int knapsack(int val[],int wt[],int W,int n){
    if(n==0||W==0)
    return 0;
    if(wt[n-1]>W)
    return knapsack(val,wt,W,n-1);
    return max(knapsack(val,wt,W-wt[n-1],n-1)+val[n-1],knapsack(val,wt,W,n-1));
}
int main()
{
    int wt[]={10,20,30};
    int val[]={100,50,150},W=50;
    cout<<knapsack(val,wt,W,3)<<endl;
    return 0;
}
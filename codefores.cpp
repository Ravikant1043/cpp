 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n,c,m=0;
         cin>>n>>c;
         // int a[n];
         // vcetor<int> a;
         int a[n];
         for(int i=0;i<n;i++){
             cin>>a[i];
             m=max(a[i],m);
         }
         // map<int ,int>mp;
         int b[m+1]={0};
         for(int i=0;i<n;i++){
             b[a[i]]++;
         }
         int cost=0;
         for(int i=0;i<=m;i++){
             if(b[i]>=c){
                 cost+=c;
             }
             else{
                 cost+=(b[i]*1);
             }
         }
         cout<<cost;
         // for(auto i:mp)cout<<i.first;
     }
 }

#include<bits/stdc++.h>
// using namespace std;
// class Node{
//     int val;
//     Node* next;
//     Node(int data){
//         val=data;
//         next=NULL;
//     }
// };
void multipp(vector<int>& t,int n){
    int ca=0;
    int i=0;
    while(i<t.size()){
        int v=t[i]*n+ca;
        t[i]=v%10;
        // cout<<t[i]<<" .";
        ca=v/10;
        i++;
    }
    while(ca!=0){
        t.push_back(ca%10);
        // cout<<t[1]<<" ;;";
        ca/=10;
    }
}
int main(){
    // Node* tail(1);
    int n;
    cin>>n;
    vector<int>t;
    t.push_back(1);
    for(int i=2;i<=n;i++){
        // multiply(tail,i)
        multipp(t,i);
    }
    for(int i=t.size()-1;i>=0;i--){
        cout<<t[i];
    }
    return 0;
}
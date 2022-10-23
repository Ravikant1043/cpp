#include<iostream>
#include<stack>
using namespace std;

void insertAtbottom(stack<int> &s,int t){

    if(s.empty()){
        s.push(t);
        return;
    }

    int tt=s.top();
    s.pop();
    insertAtbottom(s,t);

    s.push(tt);
}

void reverse(stack<int> &s){

    if(s.empty()){
        return ;
    }
    
    int t=s.top();
    s.pop();
    reverse(s);
    insertAtbottom(s,t);
}
int main(){
    stack<int > ss;
    ss.push(3);
    ss.push(4);
    ss.push(5);
    for(int i=0;i<ss.size();i++){
        cout<<ss.top()<<" ";
        ss.pop();
    }cout<<endl;

    reverse(ss);

    for(int i=0;i<ss.size();i++){
        cout<<ss.top()<<" ";
        ss.pop();
    }cout<<endl;
}
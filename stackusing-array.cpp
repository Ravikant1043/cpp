#include<iostream>
using namespace std;
#define n 7
class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"stack overflow"<<endl;
            return ;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return ;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
        
    }

    bool empty(){
        return top==-1;
    }
};

int main()
{
    stack s;
    s.push(78);
    s.push(7);
    cout<<s.Top();

    return 0;
}
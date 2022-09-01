#include<iostream>
using namespace std;

string keyboards[]={"",".","abc","def","ghi","jkl","mno","pqr","stu","vwxyz"};

void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string ss=keyboards[ch-'0'];
    string r=s.substr(1);

    for(int i=0;i<ss.length();i++)
    keypad(r,ans+ss[i]);
}
int main(){
    keypad("33","");
    return 0;
}
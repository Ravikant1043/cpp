#include<iostream>
using namespace std;

void substring2(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    int c=ch;
    string ss=s.substr(1);
    substring2(ss,ans);
    substring2(ss,to_string(c));
    substring2(ss,ans+ch);
}
int main(){
    string s;
    cin>>s;
    substring2(s,"");
    return 0;
}
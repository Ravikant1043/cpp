#include<iostream>
using namespace std;

void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string r=s.substr(1);
    substring(r,ans);
    substring(r,ans+ch);

}
int main()
{
    string s;
    cin>>s;
    substring(s,"");
    return 0;
}
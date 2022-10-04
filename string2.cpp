#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="sdjferoin";
    
    // sort(s1.begin(),s1.end()); //sorting the s1 from begin to end
    // cout<<s1<<endl;


    transform(s1.begin(),s1.end(),s1.begin(),::toupper);  //trasform the string (begin,string)  from begin to upper
    cout<<s1<<endl;
    
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    cout<<s1<<endl;


    string r="898738";
    sort(r.begin(),r.end(),greater<int>());
    cout<<r<<endl;
}
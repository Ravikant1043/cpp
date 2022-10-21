#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    // for(int i=0;i<n;i++)
    // cout<<arr[i];
    cout<<INT_MIN<<endl;  //included in climits header file
    cout<<INT_MAX;


    // max and min are the two inbuilt functions in c++
    return 0;
}
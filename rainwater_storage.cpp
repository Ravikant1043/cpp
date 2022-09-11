#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> w;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int water = 0;
    int l = 0, leftmax = 0, r = n-1, rightmax = 0;
    while (l <= r)
    {
        if (w[l] <= w[r])
        {
            if (w[l] >= leftmax)
                leftmax = w[l];
            else
                water += (leftmax - w[l]);
            l++;
        }
        else
        {
            if (w[r] >= rightmax)
                rightmax = w[r];
            else
                water += (rightmax - w[r]);
            r--;
        }
    }
    // cout<<water<<endl;
    cout << water;
    return 0;
}
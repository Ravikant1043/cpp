#include <iostream>
using namespace std;
bool getBit(int a, int pos)
{
    return (a & (1 << pos)) != 0;
}

int setBit(int a, int pos)
{
    return (a | (1 << pos));
}

// unique number from the given triplets  .
int unique(int arr[], int n)
{
    int r = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
                sum++;
        }
        if (sum % 3 != 0)
        {
            r = setBit(r, i);
        }
    }
    return r;
}

int main()
{
    int n;
    cin >> n;
    int arr[n], i, j;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << unique(arr, n);
    return 0;
}
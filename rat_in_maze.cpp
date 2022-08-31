#include <iostream>
using namespace std;
bool is_safe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
        return true;
    return false;
}

bool rat_in_maze(int **arr, int x, int y, int n, int **solar)
{
    if (y == n - 1 || x == n - 1)
        return true;

    if (is_safe(arr, x, y, n))
    {
        solar[x][y] = 1;
        if (rat_in_maze(arr, x + 1, y, n, solar))
            return true;
        if (rat_in_maze(arr, x, y + 1, n, solar))
            return true;
        solar[x][y] = 0;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    int **solar = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solar[i] = new int[n];
        for (int j = 0; j < n; j++)
            solar[i][j] = 0;
    }

    if(rat_in_maze(arr,0,0,n,solar));
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<solar[i][j]<<" ";
             cout<<endl;
        }
       
    }
    return 0;
}
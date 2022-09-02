#include <iostream>
using namespace std;

bool is_safe(int **ar, int x, int y, int n)
{
    for (int row = 0; row < x; row++)
    {
        if (ar[row][y] == 1)
            return false;
    }
    
    int row = x, col = y;
    while (row >= 0 && col >= 0)
    {
        if (ar[row][col] == 1)
            return false;
        row--;
        col--;
    }

    row = x;
    col = y;
    while (row >= 0 && col <= n - 1)
    {
        if (ar[row][col] == 1)
            return false;
        row--;
        col++;
    }
    return true;
}

bool nQueen(int **ar, int x, int n)
{
    if (x >= n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (is_safe(ar, x, col, n))
        {
            ar[x][col] = 1;
            if (nQueen(ar, x + 1, n))
            {
                return true;
            }
            ar[x][col] = 0;
        }
    }

    return false;
}
int main()
{
    int n;
    cin >> n;
    int **ar = new int *[n];
    for (int i = 0; i < n; i++)
    {
        ar[i] = new int[n];
        for (int j = 0; j < n; j++)
            ar[i][j] = 0;
    }

    nQueen(ar, 0, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ar[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
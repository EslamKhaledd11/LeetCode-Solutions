#include <iostream>
#include <vector>
using namespace std;

bool solve(int x, int y, vector<vector<int>> &grid)
{
    vector<int> row(3);
    vector<int> col(3);
    int d1 = 0, d2 = 0;
    vector<int> vis(16);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vis[grid[x + i][j + y]]++;
            row[i] += grid[i + x][j + y];
            col[j] += grid[i + x][j + y];

            if (i == j)
            {
                d1 += grid[i + x][j + y];
            }
            if (i + j == 2)
            {
                d2 += grid[i + x][j + y];
            }
        }
    }

    if (d1 != d2)
        return false;

    for (int i = 0; i < 3; i++)
    {
        if (d1 != row[i] || d2 != col[i])
        {
            return false;
        }
    }

    for (int i = 1; i <= 9; i++)
    {
        if (vis[i] != 1)
        {
            return false;
        }
    }

    return true;
}

int numMagicSquaresInside(vector<vector<int>> &grid)
{
    int counter = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (i + 3 <= grid.size() && j + 3 <= grid[0].size())
            {
                counter += solve(i, j, grid);
            }
        }
    }
    return counter;
}

int main()
{
    return 0;
}
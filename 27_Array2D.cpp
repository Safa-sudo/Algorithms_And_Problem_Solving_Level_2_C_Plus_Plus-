#include <iostream>
#include <cstdio>
using namespace std;

void Fill2DArray(int x[10][10])
{
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            x[i - 1][j - 1] = i * j;
        }
    }
}

void PrintArray2D(int x[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%02d  ", x[i][j]);
        }
        cout << "\n";
    }
}
int main()
{
    // int x[Rows] [Cols]
    int x[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf("x [%d] [%d] = %d\n", i, j, x[i][j]);
        }
    }

    cout << "\n\n Home work\n";
    int y[10][10];
    Fill2DArray(y);

    PrintArray2D(y);

    return 0;
}
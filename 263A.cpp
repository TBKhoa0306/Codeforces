/**
 * @author      : Khoa
 * @file        : "263A.cpp"
 * @created     : "2025-11-11 18:32"
 */
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x;
    int row = 0;
    int column = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                row = i;
                column = j;
            }
        }
    }
    cout << abs(row - 2) + abs(column - 2);

    return 0;
}
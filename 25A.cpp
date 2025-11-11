/**
 * @author      : Khoa
 * @file        : "25A.cpp"
 * @created     : "2025-11-11 18:59"
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int countE = 0;
    int countO = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            countE++;
        }
        else
        {
            countO++;
        }
    }
    bool majority = (countE > countO);
    if (majority == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << i + 1;
            }
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                cout << i + 1;
            }
        }
    }

    return 0;
}
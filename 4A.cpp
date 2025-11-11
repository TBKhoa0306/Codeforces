/**
 * @author      : Khoa
 * @file        : "4A.cpp"
 * @created     : "2025-11-10 21:17"
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
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
/**
 * @author      : Khoa
 * @file        : "231A.cpp"
 * @created     : "2025-11-11 17:31"
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        int n;
        int sum = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> n;
            sum += n;
        }
        if (sum >= 2)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
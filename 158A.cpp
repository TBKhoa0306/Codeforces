/**
 * @author      : Khoa
 * @file        : "158A.cpp"
 * @created     : "2025-11-11 17:43"
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
    int n, k;
    cin >> n >> k;
    int a[100];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int checkpoint = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= checkpoint && a[i] > 0)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
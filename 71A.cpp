/**
 * @author      : Khoa
 * @file        : "71A.cpp"
 * @created     : "2025-11-11 16:48"
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
    string s;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        cin >> s;
        for (int i = 1; i < s.size() - 1; i++)
        {
            count++;
        }

        if (s.size() > 10)
        {
            cout << s[0] << count << s[s.size() - 1] << '\n';
        }
        else
        {
            cout << s << '\n';
        }
    }
    return 0;
}
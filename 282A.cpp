/**
 * @author      : Khoa
 * @file        : "282A.cpp"
 * @created     : "2025-11-11 17:42"
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
    int t;
    cin >> t;
    int sum = 0;
    string s;
    while (t--)
    {

        cin >> s;
        if (s[1] == '+')
        {
            sum++;
        }

        else if (s[1] == '-')
        {
            sum--;
        }
    }
    cout << sum;
    return 0;
}
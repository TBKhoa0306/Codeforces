/**
 * @author      : Khoa
 * @file        : "50A.cpp"
 * @created     : "2025-11-11 18:13"
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
    int n, m;
    cin >> n >> m;
    int square = n * m;
    cout << square / 2;
    return 0;
}
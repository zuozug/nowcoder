#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    double a, b, c;
    cin >> a >>  b >> c;
    a *= 1000000; b *= 1000000; c *= 1000000;
    int aa = a, bb = b, cc = c;
    if (a - b == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
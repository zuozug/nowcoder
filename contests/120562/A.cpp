#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (abs(a - b) <= 1 && abs(b - c) <= 1 && abs(a - c) <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
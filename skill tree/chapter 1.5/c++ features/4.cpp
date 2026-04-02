#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int b;
        cin >> b;
        int a = sqrt(b);
        if (a * a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
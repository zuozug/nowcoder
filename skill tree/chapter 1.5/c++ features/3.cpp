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
        int l = 1, r = 1000000000;
        while (l < r) {
            int mid = (l + r + 1) / 2;
            if (mid * mid > b)
                r = mid - 1;
            else
                l = mid;
        }
        cout << l << endl;
    }
    return 0;
}
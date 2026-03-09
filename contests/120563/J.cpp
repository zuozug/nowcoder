#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        int nn = n;
        int dep = 0;
        while (nn) {
            dep++;
            nn /= 2;
        }
        int sum = 0;
        for (int i = 0; i < dep - 1; i++) {
            sum <<= 1;
            sum += 1;
        }
        n = n - sum;
        // cout << sum << " " << n << endl;
        while (q--) {
            int x;
            cin >> x;
            if (x > sum)
                cout << n << endl;
            else {
                int d = 0;
                while (x) {
                    d++;
                    x /= 2;
                }
                int ans = 1;
                ans <<= (d - 1);
                cout << ans << endl;
            }
        }
    }
    return 0;
}
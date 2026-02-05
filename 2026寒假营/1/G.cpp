#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int l, r;
        cin >> l >> r;
        if (l == r) {
            string s = to_string(l);
            while (s.size() && *s.rbegin() == '0')
                s.pop_back();
            reverse(s.begin(), s.end());
            if (s.size())
                cout << s << endl;
            else
                cout << 0 << endl;
            continue;
        }
        if (r % 10 == 0)
            r--;
        int ans = 1;
        int temp = r;
        while (temp) {
            ans *= 10;
            temp /= 10;
        }
        ans /= 10;
        ans = max(ans, l);
        while (ans) {
            if (ans % 10 == 9) {
                cout << ans % 10;
                if (r % 10 != 9) {
                    r /= 10;
                    r--;
                }
                else
                    r /= 10;
                ans /= 10;
                continue;
            }
            ans++;
            if (ans > r) {
                ans--;
                cout << ans % 10;
                r /= 10;
                ans /= 10;
            }
        }
        cout << endl;
    }
    return 0;
}
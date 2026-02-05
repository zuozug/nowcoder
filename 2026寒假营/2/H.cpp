#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++)
            ans += (1 + i) * i / 2 * (n - i + 1);
        map<int, vector<int>> pos;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]].push_back(i);
        }
        for (auto i : pos) {
            if (i.second.size() == 1)
                continue;
            for (int j = i.second.size() - 1; j > 0; j--) {
                int len = n - i.second[j];
                ans -= (1 + len) * len / 2 * (i.second[j - 1] + 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
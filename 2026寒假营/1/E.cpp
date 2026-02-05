#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        a.push_back(k);
        int ans = a[0] + a[n];
        for (int i = 1; i <= n; i++)
            ans = max(ans, a[i] + a[i - 1]);
        cout << ans << endl;
    }
    return 0;
}
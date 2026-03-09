#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n * 2);
    vector<int> l(n + 1, -1), r(n + 1, -1);
    for (int i = 0; i < n * 2; i++)
        cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n * 2; i++) {
        if (l[a[i]] == -1)
            l[a[i]] = i;
        else {
            ans += i - l[a[i]] - 1;
            r[a[i]] = i;
        }
    }
    // cout << ans << endl;
    int minr = 1e18, maxl = -1;
    for (int i = 1; i <= n; i++) {
        minr = min(minr, r[i]);
        maxl = max(maxl, l[i]);
    }
    // cout << minr << " " << maxl << endl;
    if (minr < maxl)
        ans += 2 * (maxl - minr);
    cout << ans << endl;
    return 0;
}
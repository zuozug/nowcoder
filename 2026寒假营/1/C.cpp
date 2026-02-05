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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = a[0], r = a[n - 1];
        int ma = 0;
        for (int i = 1; i < n - 1; i++)
            ma = max(ma, a[i]);
        if (ma > l && ma > r)
            cout << l + r + (n - 2) * ma << endl;
        else
            cout << l + r + (n - 2) * max(l, r) << endl;
    }
    return 0;
}
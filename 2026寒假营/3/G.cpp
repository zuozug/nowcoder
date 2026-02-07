#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        int suma = 0, sumb = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            suma += a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            sumb += b[i];
        }
        if (suma == sumb)
            cout << 1 << endl;
        else if (suma < sumb) {
            sort(b.begin(), b.end());
            int cnt = 0;
            for (int i = m - 1; i >= 0; i--) {
                sumb -= b[i];
                cnt++;
                if (sumb <= suma)
                    break;
            }
            cout << cnt << endl;
        }
        else {
            sort(a.begin(), a.end());
            int cnt = 0;
            for (int i = n - 1; i >= 0; i--) {
                suma -= a[i];
                cnt++;
                if (suma <= sumb)
                    break;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n), b(n), g(n), k(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    int x, y;
    cin >> x >> y;
    int flag = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i]) {
            flag = 1;
            cout << i + 1 << endl;
            break;
        }
    }
    if (flag == 0)
        cout << -1 << endl;
    return 0;
}
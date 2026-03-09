#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> p(m, 1e18);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        p[a[i]] = min(p[a[i]], i);
    }
    // for (auto i : p)
    //     cout << i << " ";
    // cout << endl;
    int flag = 1;
    for (int i = a[n - 1] + 1; i < m - 1; i++) {
        if (p[i] > p[i + 1]) {
            flag = 0;
            break;
        }
    }
    // cout << flag << endl;
    if (flag == 0) {
        cout << 0 << endl;
        return 0;
    }
    int num = a[n - 1];
    int cnt = 0;
    if (num == 0)
        cnt++;
    for (int i = n - 2; i >= 0; i--) {
        // cout << a[i] << " " << num << endl;
        if (a[i] >= num - 1)
            num = a[i];
        if (num == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
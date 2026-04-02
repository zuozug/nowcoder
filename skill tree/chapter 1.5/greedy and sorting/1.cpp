#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 3; i++) {
        map<int, int> m;
        for (int j = i; j < i + 4; j++)
            m[a[j]]++;
        if (m.size() == 2) {
            if (m.begin()->second == 1 || m.begin()->second == 3) {
                cnt++;
                i += 3;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
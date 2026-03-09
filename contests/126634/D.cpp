#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        vector<array<int, 3>> pre(n + 1, {0, 0, 0});
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1];
            if (s[i - 1] == 'r')
                pre[i][0]++;
            else if (s[i - 1] == 'y')
                pre[i][1]++;
            else
                pre[i][2]++;
        }
        // for (auto i : pre) {
        //     for (auto j : i)
        //         cout << j << " ";
        //     cout << endl;
        // }
        int sum = 0;
        if (pre[n][0] >= pre[n][1]) {
            sum += pre[n][0] * 2 + pre[n][1];
            sum += 2 * min(m, pre[n][2]);
        }
        else {
            sum += pre[n][1] * 2 + pre[n][0];
            sum += 2 * min(m, pre[n][2]);
        }
        if (sum < k) {
            cout << -1 << endl;
            continue;
        }
        int l = 1, r = n;
        while (l < r) {
            int mid = (l + r) / 2;
            int flag = 0;
            for (int i = 1; i <= n; i++) {
                if (i + mid - 1 > n)
                    break;
                array<int, 3> temp;
                temp[0] = pre[i + mid - 1][0] - pre[i - 1][0];
                temp[1] = pre[i + mid - 1][1] - pre[i - 1][1];
                temp[2] = pre[i + mid - 1][2] - pre[i - 1][2];
                sum = 0;
                if (temp[0] >= temp[1]) {
                    sum += temp[0] * 2 + temp[1];
                    sum += 2 * min(m, temp[2]);
                }
                else {
                    sum += temp[1] * 2 + temp[0];
                    sum += 2 * min(m, temp[2]);
                }
                if (sum >= k) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                r = mid;
            else
                l = mid + 1;
        }
        cout << l << endl;
    }
    return 0;
}
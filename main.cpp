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
        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        vector<array<int, 2>> a(2), b(2);
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (s[i][j] == '1') {
                    a[cnt1] = {i, j};
                    cnt1++;
                }
                else if (s[i][j] == '2') {
                    b[cnt2] = {i, j};
                    cnt2++;
                }
            }
        }
        // for (int i = 0; i < 2; i++)
        //     cout << a[i][0] << " " << a[i][1] << endl;
        // for (int i = 0; i < 2; i++)
        //     cout << b[i][0] << " " << b[i][1] << endl;
        // if ((a[0][0] != 0 && a[0][0] != n - 1) ||
        //     (a[1][0] != 0 && a[1][0] != n - 1) ||
        //     (a[0][1] != 0 && a[0][1] != m - 1) ||
        //     (a[1][1] != 0 && a[1][1] != m - 1) ||
        //     (b[0][0] != 0 && b[0][0] != n - 1) ||
        //     (b[1][0] != 0 && b[1][0] != n - 1) ||
        //     (b[0][1] != 0 && b[0][1] != m - 1) ||
        //     (b[1][1] != 0 && b[1][1] != m - 1))
        //     cout << "YES" << endl;
        // else {
            string temp;
            for (int i = 0; i < m; i++) {
                if (s[0][i] != '0')
                    temp.push_back(s[0][i]);
            }
            for (int i = 1; i < n ; i++ ) {
                if (s[i][m - 1] != '0')
                    temp.push_back(s[i][m - 1]);
            }
            for (int i = m - 2; i >= 0; i--) {
                if (s[n - 1][i] != '0')
                    temp.push_back(s[n - 1][i]);
            }
            for (int i = n - 2; i >= 1; i--) {
                if (s[i][0] != '0')
                    temp.push_back(s[i][0]);
            }
        if (temp.size() < 4) {
            if ((s[0][0] == '1' && s[0][1] == '2' && s[1][0] == '2') ||
                (s[0][0] == '2' && s[0][1] == '1' && s[1][0] == '1') ||
                (s[0][m - 1] == '1' && s[0][m - 2] == '2' && s[1][m - 1] == '2') ||
                (s[0][m - 1] == '2' && s[0][m - 2] == '1' && s[1][m - 1] == '1') ||
                (s[n - 1][m - 1] == '1' && s[n - 1][m - 2] == '2' && s[n - 2][m - 1] == '2') ||
                (s[n - 1][m - 1] == '2' && s[n - 1][m - 2] == '1' && s[n - 2][m - 1] == '1') ||
                (s[n - 1][0] == '1' && s[n - 1][1] == '2' && s[n - 2][0] == '2') ||
                (s[n - 1][0] == '2' && s[n - 1][1] == '1' && s[n - 2][0] == '1'))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else {
            // cout << temp << endl;
            if (temp == "1212" || temp == "2121")
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        // }
    }
    return 0;
}
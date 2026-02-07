#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++) {
        int x = i + 1, y = n - i;
        for (int j = 0; j < n; j++) {
            if (a[x - 1][j] == -1)
                a[x - 1][j] = i % 2;
        }
        for (int j = 0; j < n; j++) {
            if (a[j][y - 1] == -1)
                a[j][y - 1] = i % 2;
        }
        // for (auto ii : a) {
        //     for (auto jj : ii) {
        //         if (jj == -1)
        //             cout << "  ";
        //         else
        //             cout << jj << " ";
        //     }
        //     cout << endl;
        // }
    }
    for (auto ii : a) {
        for (auto jj : ii) {
            if (jj == -1)
                cout << "  ";
            else
                cout << jj;
        }
        cout << endl;
    }
    return 0;
}

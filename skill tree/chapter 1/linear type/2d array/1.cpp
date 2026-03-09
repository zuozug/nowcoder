#include<bits/stdc++.h>
using namespace std;
#define int long long
int Mod = 1000000007;
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        a[i][0] = 1;
    for (int j = 0; j < m; j++)
        a[0][j] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++)
            a[i][j] = (a[i - 1][j] + a[i][j - 1]) % Mod;
    }
    cout << a[n - 1][m - 1] << endl;
    return 0;
}
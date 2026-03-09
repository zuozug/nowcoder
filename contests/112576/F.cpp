#include<bits/stdc++.h>
using namespace std;
#define int long long
int MOD = 1000000007;
int qpow(int a, int b) {
    int res = 1;
    while (b) {
        if (b % 2 == 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b /= 2;
    }
    return res;
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    n *= 2;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (i / 2 + 1) * 100 * qpow(b[i], MOD - 2) % MOD;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
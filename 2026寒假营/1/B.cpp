#include <bits/stdc++.h>
using namespace std;
#define int long long
int Mod = 998244353;
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vector<int> jc(200001);
    jc[0] = 1;
    for (int i = 1; i <= 200000; i++)
        jc[i] = jc[i - 1] * i % Mod;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(b.begin(), b.end());
        int cntupper = 0, cntlower = 0;
        for (auto i : a) {
            if (i > b[0])
                cntupper++;
            else
                cntlower++;

        }
        cout << jc[cntlower] * jc[cntupper] % Mod << endl;
    }
    return 0;
}
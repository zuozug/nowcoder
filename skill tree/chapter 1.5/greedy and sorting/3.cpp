#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num % 2 == 1)
            ans++;
    }
    if (ans == 0)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}
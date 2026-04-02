#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    if (n - k == 1) {
        cout << -1 << endl;
        return 0;
    }
    for (int i = 1; i <= k; i++)
        cout << i << " ";
    if (n > k)
        cout << n << " ";
    for (int i = k + 1; i < n; i++)
        cout << i << " ";
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    if (n > m)
        swap(n, m);
    if (m - n > 1)
        cout << n * 2 + 1 << endl;
    else
        cout << n + m << endl;
    return 0;
}
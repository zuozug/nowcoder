#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    if (n < 3)
        cout << -1 << endl;
    else {
        cout << n << " ";
        for (int i = 1; i < n; i++)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
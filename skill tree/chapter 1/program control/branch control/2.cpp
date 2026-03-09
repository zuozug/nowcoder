#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x, l, r;
    cin >> x >> l >> r;
    if (x >= l && x <= r)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
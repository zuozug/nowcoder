#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x;
    cin >> x;
    int flag = 0;
    for (int i = 1; i <= 10; i++) {
        if (x == i * (i + 1))
            flag = 1;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
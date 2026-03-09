#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x;
    cin >> x;
    if (x >= 5000)
        cout << 0.6 * x << endl;
    else if (x >= 2000)
        cout << 0.7 * x << endl;
    else if (x >= 500)
        cout << 0.8 * x << endl;
    else if (x >= 100)
        cout << 0.9 * x << endl;
    else
        cout << x << endl;
    return 0;
}
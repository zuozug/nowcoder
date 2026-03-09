#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c < 180)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
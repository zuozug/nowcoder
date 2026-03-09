#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x, n;
    cin >> x >> n;
    cout << (x - 1 + n) % 7 + 1 << endl;
    return 0;
}
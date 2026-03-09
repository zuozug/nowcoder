#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) << endl;
    return 0;
}
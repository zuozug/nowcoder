#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x, y;
    int x1, y1;
    cin >> x >> y >> x1 >> y1;
    if (x == x1) {
        if (y > y1)
            cout << 'd' << endl;
        else
            cout << 'u' << endl;
    }
    else {
        if (x > x1)
            cout << 'l' << endl;
        else
            cout << 'r' << endl;
    }
    return 0;
}
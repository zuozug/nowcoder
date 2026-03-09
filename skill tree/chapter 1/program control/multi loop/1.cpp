#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int mi = 1e9, ma = -1e9;
    while (n--) {
        int num;
        cin >> num;
        mi = min(mi, num);
        ma = max(ma, num);
    }
    cout << ma - mi << endl;
    return 0;
}
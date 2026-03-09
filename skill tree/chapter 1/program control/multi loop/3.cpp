#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    int ma = -1e18;
    int flag;
    for (int i = 0; i < n * m; i++) {
        int num;
        cin >> num;
        if (num > ma) {
            ma = num;
            flag = i;
        }
    }
    cout << flag / m + 1 << " " << flag % m + 1 << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int nn = n;
        int dig = 0;
        while (nn) {
            dig++;
            nn /= 2;
        }
        int nnn = n << dig;
        cout << nnn << " " << nnn + n << endl;
    }
    return 0;
}
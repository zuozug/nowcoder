#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int f1 = 1, f2 = 1;
    int n;
    cin >> n;
    if (n == 1 || n == 2)
        cout << 1 << endl;
    else {
        for (int i = 3; i <= n; i++) {
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
        }
        cout << f2 << endl;
    }
    return 0;
}
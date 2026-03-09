#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    if (n % 2 == 1)
        cout << 3 * n + 1 << endl;
    else
        cout << n / 2 << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    if (n % 10 == 0)
        cout << 1 << endl;
    else if (n % 10 == 5)
        cout << 2 << endl;
    else if (n % 10 % 2 == 0)
        cout << 5 << endl;
    else
        cout << 10 << endl;
    return 0;
}
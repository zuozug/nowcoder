#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    double k;
    cin >> k;
    double c = k - 273.15;
    double f = c * 1.8 + 32;
    cout << f << endl;
    return 0;
}
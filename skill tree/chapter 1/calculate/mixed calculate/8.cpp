#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a * b + b * c + a * c) * 2 << endl;
    cout << a * b * c << endl;
    return 0;
}
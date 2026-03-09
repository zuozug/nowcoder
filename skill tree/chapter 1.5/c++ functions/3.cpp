#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    cout << "The maximum number is : " << max({a, b, c}) << endl;
    cout << "The minimum number is : " << min({a, b, c}) << endl;
    return 0;
}
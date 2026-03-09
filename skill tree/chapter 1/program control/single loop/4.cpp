#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += 1.0 / i;
    cout << sum << endl;
    return 0;
}
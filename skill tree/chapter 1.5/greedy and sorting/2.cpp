#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n * 2; i++) {
        int num;
        cin >> num;
        mp[num]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += min((int)2, mp[i]);
    cout << ans << endl;
    return 0;
}
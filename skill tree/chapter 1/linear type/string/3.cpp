#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int cnt = 0;
    for (auto i : s) {
        if (i == 'o')
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
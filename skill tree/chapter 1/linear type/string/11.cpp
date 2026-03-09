#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    while (cin >> s) {
        if (s[0] >= 'a' && s[0] <= 'z')
            s[0] += 'A' - 'a';
        cout << s[0];
    }
    return 0;
}
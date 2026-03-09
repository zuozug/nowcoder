#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    char a1, a2, a3, a4;
    string s;
    cin >> n >> a1 >> a2 >> a3 >> a4 >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == a1)
            s[i] = a2;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == a3)
            s[i] = a4;
    }
    cout << s << endl;
    return 0;
}
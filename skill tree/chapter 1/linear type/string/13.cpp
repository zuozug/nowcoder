#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a, b, c;
    for (auto i : s) {
        if (i >= 'a' && i <= 'z')
            a.push_back(i);
        else if (i >= '0' && i <= '9')
            b.push_back(i);
        else
            c.push_back(i);
    }
    cout << a << b << c << endl;
    return 0;
}
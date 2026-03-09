#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int m = s[4] - '0';
    m = m * 10 + s[5] - '0';
    if (m <= 2)
        cout << "winter" << endl;
    else if (m <= 5)
        cout << "spring" << endl;
    else if (m <= 8)
        cout << "summer" << endl;
    else if (m <= 11)
        cout << "autumn" << endl;
    else
        cout << "winter" << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int y = stoi(s.substr(0, 4)) + 10;
    cout << y << s.substr(4, 100) << endl;
    return 0;
}
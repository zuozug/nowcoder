#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int sum = 0;
    for (auto i : s)
        sum += i - '0';
    cout << sum << endl;
    return 0;
}
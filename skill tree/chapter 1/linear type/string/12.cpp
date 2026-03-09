#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++) {
        if ((s.size() - i) % 3 == 0) {
            s.insert(s.begin() + i, ',');
            i++;
        }
    }
    cout << s << endl;
    return 0;
}
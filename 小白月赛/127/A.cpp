#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"};
    int flag = 1;
    int ma = -1;
    for (int i = 1; i <= 7; i++) {
        int num;
        cin >> num;
        if (num > ma) {
            flag = i;
            ma = num;
        }
    }
    cout << s[flag - 1] << endl;
    return 0;
}
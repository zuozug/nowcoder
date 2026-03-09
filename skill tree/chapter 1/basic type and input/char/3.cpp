#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    char c;
    cin >> c;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << c;
        cout << endl;
    }
    return 0;
}
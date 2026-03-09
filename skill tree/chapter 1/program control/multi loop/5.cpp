#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << "*" << i << "=";
            if (j * i < 10)
                cout << " ";
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
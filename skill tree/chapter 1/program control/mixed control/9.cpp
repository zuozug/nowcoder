#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int m, n;
    while (cin >> m >> n) {
        int cnt = 0;
        for (int i = m; i <= n; i++) {
            int sum = 0;
            sum += pow(i % 10, 3);
            sum += pow(i / 10 % 10, 3);
            sum += pow(i / 100, 3);
            if (sum == i) {
                cout << i << " ";
                cnt++;
            }
        }
        if (cnt == 0)
            cout << "no";
        cout << endl;
    }
    return 0;
}
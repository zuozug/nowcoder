#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        if (n <= 2)
            cout << -1 << endl;
        else {
            if (n % 2 == 1) {
                for (int i = 1; i <= n / 2 + 1; i++)
                    cout << i << " ";
                for (int i = n / 2; i >= 1; i--)
                    cout << i << " ";
                cout << endl;
            }
            else {
                if (n == 4)
                    cout << -1 << endl;
                else {
                    cout << "1 2 1 ";
                    for (int i = 1; i <= (n - 3) / 2 + 1; i++)
                        cout << i << " ";
                    for (int i = (n - 3) / 2; i >= 1; i--)
                        cout << i << " ";
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
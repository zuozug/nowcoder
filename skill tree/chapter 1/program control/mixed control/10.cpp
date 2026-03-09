#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        while (temp) {
            if (temp % 10 == x)
                cnt++;
            temp /= 10;
        }
    }
    cout << cnt << endl;
    return 0;
}
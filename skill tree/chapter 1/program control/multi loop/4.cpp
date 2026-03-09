#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    int sum = 0;
    for (int i= 0; i < n * m; i++) {
        int num;
        cin >> num;
        sum += max(0ll, num);
    }
    cout << sum << endl;
    return 0;
}
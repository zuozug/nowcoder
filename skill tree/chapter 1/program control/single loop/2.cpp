#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int sum = 0;
    while (n--) {
        int num;
        cin >> num;
        sum += num;
    }
    cout << sum << endl;
    return 0;
}
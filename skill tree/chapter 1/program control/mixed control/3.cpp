#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    map<int, int> cnt;
    while (n--) {
        int num;
        cin >> num;
        cnt[num]++;
    }
    cin >> n;
    cout << cnt[n] << endl;
    return 0;
}
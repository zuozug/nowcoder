#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        if (num > 0)
            cnt1++;
        else
            cnt2++;
    }
    cout << "positive:" << cnt1 << endl;
    cout << "negative:" << cnt2 << endl;
    return 0;
}
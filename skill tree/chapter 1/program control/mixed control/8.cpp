#include<bits/stdc++.h>
using namespace std;
#define int long long
bool check(int num) {
    if (num % 4 == 0)
        return true;
    while (num) {
        if (num % 10 == 4)
            return true;
        num /= 10;
    }
    return false;
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (check(i))
            continue;
        cout << i << endl;
    }
    return 0;
}
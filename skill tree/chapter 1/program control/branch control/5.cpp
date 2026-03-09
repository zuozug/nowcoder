#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    if (n % 2 == 0 && n > 50)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
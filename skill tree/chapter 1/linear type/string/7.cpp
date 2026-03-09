#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string x;
    int ii;
    cin >> x >> ii;
    for (int i = x.size() - ii; i < x.size(); i++)
        cout << x[i];
    cout << endl;
    return 0;
}
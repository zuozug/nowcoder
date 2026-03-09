#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string a;
    cin >> a;
    vector<int> aa;
    for (auto i : a)
        aa.push_back(i - '0');
    vector<int> bb = aa;
    reverse(bb.begin(), bb.end());
    vector<int> cc;
    cc.push_back(0);
    for (int i = 0; i < aa.size(); i++) {
        cc[i] += aa[i] + bb[i];
        cc.push_back(cc[i] / 10);
        cc[i] %= 10;
    }
    reverse(cc.begin(), cc.end());
    while (cc[0] == 0)
        cc.erase(cc.begin());
    for (auto i : cc)
        cout << i;
    cout << endl;
    return 0;
}
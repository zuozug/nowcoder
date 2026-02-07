#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(string s) {
    // cout << s << endl;
    vector<int> a;
    for (int i = 0; i < s.size(); i++) {
        // cout << i << endl;
        char c = s[i];
        int len = 0;
        while (i < s.size() && s[i] == c) {
            len++;
            i++;
        }
        a.push_back(len);
        i--;
    }
    // cout << 1234567 << endl;
    int res = 0;
    while (!a.empty()) {
        // for (auto i : a)
        //     cout << i << " ";
        // cout << endl;
        int mi = 1e18;
        for (auto i : a)
            mi = min(i, mi);
        res += mi;
        for (int i = 0; i < a.size(); i++)
            a[i] -= mi;
        vector<int> aa;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 0)
                continue;
            if (i < a.size() - 1 && a[i + 1] != 0)
                aa.push_back(a[i]);
            else if (i == a.size() - 1)
                aa.push_back(a[i]);
            else {
                int len = 0;
                for (int j = i + 1; j < a.size(); j++) {
                    if (a[j] != 0)
                        break;
                    len++;
                }
                if (len % 2 == 0)
                    aa.push_back(a[i]);
                else {
                    int temp = a[i];
                    while (i + len + 1 < a.size()) {
                        temp += a[i + len + 1];
                        i = i + len + 1;
                        len = 0;
                        for (int j = i + 1; j < a.size(); j++) {
                            if (a[j] != 0)
                                break;
                            len++;
                        }
                        if (len % 2 == 0) {
                            aa.push_back(temp);
                            break;
                        }
                    }
                    if (len % 2 != 0)
                        aa.push_back(temp);
                }
            }
        }
        swap(aa, a);
    }
    return res;
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string sa, sb;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (s[i] == '1')
                    sa.push_back('1');
                else
                    sb.push_back('0');
            }
            else {
                if (s[i] == '1')
                    sb.push_back('1');
                else
                    sa.push_back('0');
            }
        }
        cout << min(solve(sa), solve(sb)) << endl;
    }
    return 0;
}{}
#include <bits/stdc++.h>
using namespace std;
#define int long long
int Mod = 998244353;
int ksm(int a, int b) {
    int res = 1;
    while (b) {
        if (b % 2 == 1)
            res = res * a % Mod;
        a = a * a % Mod;
        b /= 2;
    }
    return res;
}
vector<int> p(7);
int fm;
int fun(string s) {
    int res = 1;
    for (int i = 0; i < 7; i++) {
        if (s[i] == '1') {
            res = res * p[i] % Mod;
            res = res * fm % Mod;
        }
        else {
            res = res * (100 - p[i]) % Mod;
            res = res * fm % Mod;
        }
    }
    return res;
}
vector<int> num(10);
void initnum() {
    num[0] = fun("1110111");
    num[1] = fun("0010010");
    num[2] = fun("1011101");
    num[3] = fun("1011011");
    num[4] = fun("0111010");
    num[5] = fun("1101011");
    num[6] = fun("1101111");
    num[7] = fun("1010010");
    num[8] = fun("1111111");
    num[9] = fun("1111011");
}
int cal(int x) {
    int res = 1;
    for (int i = 0; i < 4; i++) {
        int temp = x % 10;
        x /= 10;
        res = res * num[temp] % Mod;
        // res = res * fm % Mod;
    }
    return res;
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    fm = ksm(100, Mod - 2);
    int T;
    cin >> T;
    while (T--) {
        int c;
        cin >> c;
        int ans = 0;
        for (int i = 0; i < 7; i++)
            cin >> p[i];
        initnum();
        // for (int i = 0; i < 10; i++)
        //     cout << num[i] << " ";
        // cout << endl;
        for (int i = 0; i <= c; i++) {
            int a = i, b = c - i;
            int aa = cal(a), bb = cal(b);
            // cout << aa << " " << bb << endl;
            ans = ans + aa * bb % Mod;
            ans %= Mod;
        }
        cout << ans << endl;
    }
    return 0;
}
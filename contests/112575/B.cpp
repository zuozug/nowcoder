#include<bits/stdc++.h>
using namespace std;
#define int long long
set<int> used;
int g(int num) {
    int cnt = 0;
    if (num == 0)
        return 1;
    while (num != 0) {
        if (num % 2 == 0)
            cnt++;
        num /= 2;
    }
    return num;
}
int f(int num) {
    int cnt = 0;
    while (num != 0) {
        if (num % 2 == 1)
            cnt++;
        num /= 2;
    }
    return num;
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int flag = 0;
    while (true) {
        int temp = g(f(n));
        if (temp == n) {
            flag = 1;
            cout << temp << endl;
            break;
        }
        if (used.count(temp))
            break;
        used.insert(temp);
        n = temp;
    }
    if (flag == 0)
        cout << -1 << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
bool isday(int n) {
    int yy = n / 10000, mm = n % 10000 / 100, dd = n % 100;
    if (mm > 12 || mm == 0)
        return false;
    if (dd > 31 || dd == 0)
        return false;
    if (dd == 31) {
        if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
            return true;
        return false;
    }
    if (dd == 30) {
        if (mm != 2)
            return true;
        return false;
    }
    if (dd == 29) {
        if (mm == 2) {
            if (yy % 4 == 0 && yy % 100 != 0)
                return true;
            if (yy % 400 == 0)
                return true;
            return false;
        }
        return true;
    }
    return true;
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b;
    cin >> a >> b;
    int ay = a / 10000, by = b / 10000;
    int cnt = 0;
    for (int i = ay; i <= by; i++) {
        int temp = i * 10000 + i % 10 * 1000 + i / 10 % 10 * 100 + i / 100 % 10 * 10 + i / 1000;
        if (temp >= a && temp <= b && isday(temp))
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
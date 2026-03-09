#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num == 0)
            sum += 1;
        int temp = 1;
        while (num != 0) {
            if (num % 10 == 0)
                sum += temp;
            temp *= 10;
            num /= 10;
        }
    }
    cout << sum * 8 << endl;
    return 0;
}
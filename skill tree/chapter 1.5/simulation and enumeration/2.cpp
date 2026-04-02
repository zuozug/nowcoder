#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int len = 0;
    int aax, aay, bbx, bby, ccx, ccy, ddx, ddy;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == '*')
                continue;
            for (int ii = 1; ii + i < n; ii++) {
                for (int jj = 0; jj + j < n; jj++) {
                    int ax = i, ay = j;
                    int bx = ax + ii, by = ay + jj;
                    int cx = bx - jj, cy = by + ii;
                    int dx = cx - ii, dy = cy - jj;
                    if (ax >= 0 && ax < n && ay >= 0 && ay < n &&
                        bx >= 0 && bx < n && by >= 0 && by < n &&
                        cx >= 0 && cx < n && cy >= 0 && cy < n &&
                        dx >= 0 && dx < n && dy >= 0 && dy < n &&
                        a[ax][ay] == '#' && a[bx][by] == '#' && a[cx][cy] == '#' && a[dx][dy] == '#') {
                        if (ii * ii + jj * jj > len) {
                            len = ii * ii + jj * jj;
                            aax = ax; aay = ay; bbx = bx; bby = by;
                            ccx = cx; ccy = cy; ddx = dx; ddy = dy;
                        }
                        }
                }
            }
        }
    }
    cout << aax + 1 << " " << aay + 1 << endl;
    cout << bbx + 1 << " " << bby + 1 << endl;
    cout << ccx + 1 << " " << ccy + 1 << endl;
    cout << ddx + 1 << " " << ddy + 1 << endl;
    return 0;
}
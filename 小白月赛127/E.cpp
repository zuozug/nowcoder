#include <bits/stdc++.h>
using namespace std;
#define int long long
int Mod = 998244353;
struct Node {
    int father = 0;
    int dep = 0;
    int cnt = 0;
    int sum = 0;
    vector<int> children;
};
vector<Node> node;
pair<int, int> dfs(int id) {
    for (auto i : node[id].children) {
        if (i == node[id].father)
            continue;
        node[i].dep = node[id].dep + 1;
        node[i].father = id;
        node[id].sum += node[i].dep;
        node[id].sum %= Mod;
        node[id].cnt++;
        pair<int, int> temp = dfs(i);
        node[id].sum += temp.first;
        node[id].sum %= Mod;
        node[id].cnt += temp.second;
        // cout << i << endl;
        //
        // for (int i = 1; i <= 7; i++)
        //     cout << node[i].dep << " " << node[i].sum << " " << node[i].cnt << endl;
    }
    return {node[id].sum, node[id].cnt};
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        node.clear();
        node.resize(n + 1);
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            node[u].children.push_back(v);
            node[v].children.push_back(u);
        }
        dfs(1);
        // for (int i = 1; i <= n; i++)
        //     cout << node[i].dep << " " << node[i].sum << " " << node[i].cnt << endl;
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += node[i].cnt;
            sum %= Mod;
            for (auto j : node[i].children) {
                if (j == node[i].father)
                    continue;
                int temp = node[j].sum + node[j].dep;
                temp %= Mod;
                temp -= (node[j].cnt + 1) * node[i].dep;
                temp = (temp % Mod + Mod) % Mod;
                sum += temp * (node[i].cnt - node[j].cnt - 1);
                sum %= Mod;
            }
            // cout << sum << endl;
        }
        cout << sum << endl;
    }
    return 0;
}

/*
1
7
1 2
1 3
2 4
2 5
3 6
3 7

1
7
1 4
1 7
4 2
4 6
5 7
3 7
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long
struct Node {
    int w;
    map<int, int> s;
    set<int> children;
};
int ans = 0;
vector<Node> node;
void build(int p) {
    for (auto i : node[p].children) {
        build(i);
        for (auto j : node[i].s) {
            if (j.first < node[p].w)
                node[p].s[j.first] += j.second;
        }
    }
    node[p].s[node[p].w]++;
}
void solve(int p) {
    // cout << p << endl;
    map<int, vector<int>> cnt;
    for (auto i : node[p].children) {
        // cout << i << " ";
        for (auto j : node[i].s) {
            if (j.first == node[p].w)
                ans += j.second;
            if (j.first < node[p].w)
                cnt[j.first].push_back(j.second);
        }
        // cout << ans << endl;
    }
    for (auto i : cnt) {
        int sum = 0;
        for (int j = i.second.size() - 1; j >= 0; j--) {
            ans += sum * i.second[j];
            sum += i.second[j];
        }
    }
    // for (auto i : cnt) {
    //     cout << i.first << " ";
    //     for (auto j : i.second)
    //         cout << j << " ";
    //     cout << endl;
    // }
    for (auto i : node[p].children)
        solve(i);

}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    node.resize(n);
    for (int i = 0; i < n; i++)
        cin >> node[i].w;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        node[u - 1].children.insert(v - 1);
        node[v - 1].children.insert(u - 1);
    }
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int temp = q.front();
        q.pop();
        for (auto i : node[temp].children) {
            node[i].children.erase(temp);
            q.push(i);
        }
    }
    build(0);
    // for (auto i : node) {
    //     for (auto j : i.s)
    //         cout << j.first << " " << j.second << " | ";
    //     cout << endl;
    // }
    // cout << "----------------" << endl;
    solve(0);
    cout << ans * 2 << endl;
    return 0;
}

/*
4
1 2 1 1
1 2
2 3
2 4

4
2 2 1 1
1 2
2 3
2 4

5
3 2 1 1 1
1 2
1 3
2 4
2 5
*/
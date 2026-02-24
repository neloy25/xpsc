#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 1e5 + 7;
vector<int> adj[maxN];
vector<int> respect(maxN);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) {
        adj[i].clear();
        respect[i] = 0;
    }

    int root;
    for(int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;

        if(a == -1) root = i;
        else adj[a].push_back(i);
        respect[i] = b;
    }

    vector<int> res;
    for(int i = 1; i <= n; i++) {
        if(i == root || respect[i] == 0) continue;
        bool flag = true;
        for(int val : adj[i]) {
            if(respect[val] == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            res.push_back(i);
        }
    }

    if(res.empty()) cout << -1 nl;
    else {
        for(int val : res) {
            cout << val << " ";
        }
    }
    return 0;
}
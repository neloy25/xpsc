#include<bits/stdc++.h>
using namespace std;

void solve() {
    deque<int> dq;
    int n;
    cin >> n;
    int f;
    cin >> f;
    dq.push_front(f);

    for(int i = 1; i < n;i++){
        int x;
        cin >> x;
        if(x <= dq.front()) dq.push_front(x);
        else dq.push_back(x);
    }

    for(int val : dq) {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


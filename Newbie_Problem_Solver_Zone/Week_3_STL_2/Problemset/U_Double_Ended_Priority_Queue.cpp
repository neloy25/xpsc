#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin >> n >> q;

    priority_queue<int> mx;
    priority_queue<int,vector<int>, greater<int>> mn;

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        mx.push(val);
        mn.push(val);
    }

    for(int i = 0; i < q;i++) {
        int a;
        cin >> a;
        if(a == 0) {
            int x;
            cin >> x;
            mx.push(x);
            mn.push(x);
        } else if(a == 1) {
            cout << mn.top() << endl;
            mn.pop();
        } else {
            cout << mx.top() << endl;
            mx.pop();
        }
    }
    return 0;
}


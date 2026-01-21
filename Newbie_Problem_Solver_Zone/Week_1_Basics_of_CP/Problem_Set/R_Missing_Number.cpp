#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<bool> feq(n+1,false);
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        feq[val] = true;
    }

    for(int i = 1; i <= n; i++) {
        if(!feq[i]) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int mn = 61;
    for(int i = 0; i < 3;i++) {
        int val;
        cin >> val;
        mn = min(mn,val);
    } 
    cout << mn << endl; 
    return 0;
}


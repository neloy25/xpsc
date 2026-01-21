#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;

        int x,y;
        if(r % 2 == 1) {
            y = r - 1;
        } else {
            y = r;
        }

        x = y/2;

        if(x >= l) {
            cout << x << " " << y << endl;
        } else {
            cout << "-1 -1" << endl;
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int x,y,k;
        cin >> x >> y >> k;

        int div = (x + y) / k;

        if(div % 2) {
            cout << "Paja\n";
        } else {
            cout << "Chef\n";
        }
    }
    return 0;
}


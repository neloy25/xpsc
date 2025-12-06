#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;

    int i = 0;
    while (s[i] == '0')
    {
        if(s[i] != t[i]) {
            no;
            return;
        }
        i++;      
    }

    yes;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}


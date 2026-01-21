#include<bits/stdc++.h>
using namespace std;

vector<int> palindromes;
bool isPalindrome(int x) {
    string s = to_string(x);
    string t = s;
    reverse(t.begin(),t.end());

    if(s == t) return true;
    else return false;
}



void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> feq(32768,0);
    long long res = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i]]++;
    }

    for(int i = 0; i < n;i++) {
        for(int j = 0; j < 427; j++) {
            int need = v[i] ^ palindromes[j];
            res+=feq[need];
        }
        feq[v[i]]--;
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    for(int i = 0; i < 32768; i++) {
        if(isPalindrome(i)) {
            palindromes.push_back(i);
        }
    }

    while(t--) solve();
    return 0;
}


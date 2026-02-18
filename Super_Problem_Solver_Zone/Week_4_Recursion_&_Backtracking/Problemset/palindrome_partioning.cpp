#include<bits/stdc++.h>
using namespace std;


#define vs vector<string>
#define vvs vector<vs>
class Solution {
    vvs ans;
    bool isPalindrome(string s, int l, int r) {
        while(l <= r) {
            if(s[l++] != s[r--]) return false;
        }
        return true;
    }

    void f(int idx, vs &a, string &s, int n) {
        if(idx == n) {
            ans.push_back(a);
            return;
        }

        for(int i = idx; i < n; i++) {
            if(isPalindrome(s,idx,i)) {
                a.push_back(s.substr(idx, i - idx + 1));
                f(i + 1, a,s,n);
                a.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        int n = s.size();

        vs a;
        f(0, a, s, n);
        return ans;
    }
};

int main() {
    string s;
    cin >> s;
    Solution sl;
    vvs ans = sl.partition(s);

    for(auto v : ans) {
        for(string st: v) {
            cout << st << " ";
        }
        cout << endl;
    }
    return 0;
}
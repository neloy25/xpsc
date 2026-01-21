#include<bits/stdc++.h>
using namespace std;


// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        vector<int> feq(26,0),tmp(26,0);
        
        int k = pat.size();
        for(int i = 0; i < k;i++) {
            feq[pat[i] - 'a']++;
        }

        int res = 0;
        for(int i = 0; i < txt.size();i++) {
            tmp[txt[i] - 'a']++;

            if(i >= k - 1) {
                if(i >= k) tmp[txt[i - k] - 'a']--;

                if(tmp == feq) res++;
            }
        }

        return res;
    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string txt,pat;
    cin >> txt>> pat;

    Solution s1;
    cout << s1.search(pat,txt);

    // map<char, int> mp;

    // for(int i = 0; i < pat.size();i++) {
    //     mp[pat[i]]++;
    // }

    // int res = 0;
    // for(int i = 0; i < txt.size();i++) {
    //     map<char,int> tmp = mp;
    //     while(!tmp.empty() && tmp.count(txt[i])) {
    //         tmp[txt[i]]--;
    //         if(tmp[txt[i]] == 0) tmp.erase(txt[i]);
    //         i++;
    //     }

    //     if(tmp.empty()) res++;
    // }

    // cout << res << endl;
    return 0;
}


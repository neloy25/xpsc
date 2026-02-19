#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>

class Solution {
    vvi ans;
    void f(int idx, vi &a, vi& v,int target, int n) {
        if(target == 0) {
            ans.push_back(v);
            return;
        }

        for(int i = idx; i < n; i++) {
            if(i > idx && a[i] == a[i - 1]) continue;
            if(a[i] > target) break;

            v.push_back(a[i]);
            f(i + 1, a,v,target - a[i], n);
            v.pop_back();
        }
    }
public:
    vvi combinationSum2(vi& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin(),candidates.end());

        vector<int> v;
        f(0, candidates, v, target, n);
        return ans;
    }
};

int main() {
    vi candidtaes = {10,1,2,7,6,1,5};
    Solution s;
    vvi ans = s.combinationSum2(candidtaes,8);
    for(auto v : ans) {
        for(int val : v) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
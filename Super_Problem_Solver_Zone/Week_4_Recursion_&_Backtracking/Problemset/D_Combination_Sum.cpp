#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>

class Solution {
    vvi ans;
    void f(int idx, vi&v, vi&a, int target, int n)  {
        if(target == 0) {
            ans.push_back(v);
            return;
        }

        for(int i = idx; i< n; i++) {
            if(a[i] <= target) {
                v.push_back(a[i]);
                f(i, v,a, target - a[i], n);
                v.pop_back();
            }
        }
    }
public:
    vvi combinationSum(vi& candidates, int target) {
        int n = candidates.size();
        vector<int> v;
        f(0, v,candidates, target, n);
        return ans;
    }
};

int main() {
    vi candidtaes = {10,1,2,7,6,1,5};
    Solution s;
    vvi ans = s.combinationSum(candidtaes,8);
    for(auto v : ans) {
        for(int val : v) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
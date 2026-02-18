#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define vvi vector<vi>

class Solution {
    vvi ans;
    void f(int n,vi&nums, vi &a, vi &feq) {
        if(nums.size() == a.size()) {
            ans.push_back(a);
            return;
        }

        for(int i = 0; i < n; i++) {
            if(!feq[i]) {
                a.push_back(nums[i]);
                feq[i] = 1;
                f(n, nums, a, feq);
                feq[i] = 0;
                a.pop_back();
            }
        }
    }
public:
    vvi permute(vi& nums) {
        int n = nums.size();
        vector<int> feq(n,0);

        vector<int> a;
        f(n, nums, a, feq);
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    Solution s;
    vvi ans = s.permute(v);

    for(auto vec: ans) {
        for(int val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
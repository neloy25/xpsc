#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int x) {
        ll n = arr.size();
        ll pre[n + 1];
        pre[0] = 0;
    
        for(int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + arr[i - 1];
        }
    
        map<ll, ll> sums;
        sums[0] = 0;
    
        ll res = 0;
        for(int i = 1; i<= n;i++) {
            ll need = pre[i] - x;
    
            if(sums.count(need)) res = max(res,i - sums[need]);
    
            if(!sums.count(pre[i])) sums[pre[i]] = i;
        }
    
        return res;
        
    }
};
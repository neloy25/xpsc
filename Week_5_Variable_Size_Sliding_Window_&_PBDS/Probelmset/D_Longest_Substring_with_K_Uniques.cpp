#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestKSubstr(string &arr, int k)
    {
        map<char, int> mp;
        int n = arr.size();
        int r = 0, l = 0;

        int res = -1;
        for (; r < n; r++)
        {
            mp[arr[r]]++;

            while (mp.size() > k)
            {
                mp[arr[l]]--;
                if (mp.count(arr[l]) && mp[arr[l]] == 0)
                {
                    mp.erase(arr[l]);
                }
                l++;
            }
            if (mp.size() == k)
                res = max(res, r - l + 1);
        }
        return res;
    }
};
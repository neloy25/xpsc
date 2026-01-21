#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        char chk_l,chk_r;

        int l = 0, r = n - 1;

        while(l < r) {
            if(s[l] != s[r]) {
                chk_l = s[l];
                chk_r = s[r];
                break;
            }
            l++;
            r--;
        }

        if(l >= r) {
            cout << 0 << endl;
            continue;
        }

        long long res1 = 1,res2 = 1;
        int tmp_l = l,tmp_r = r - 1;
        while(tmp_l < tmp_r) {
            if(s[tmp_l] != s[tmp_r]) {
                if(s[tmp_l] == chk_r) {
                    tmp_l++;
                    res1++;
                } else if(s[tmp_r] == chk_r) {
                    tmp_r--;
                    res1++;
                } else {
                    break;
                }
            } else {
                tmp_l++;
                tmp_r--;
            }
        }

        if(tmp_l < tmp_r) res1 = -1;

        tmp_l = l + 1,tmp_r = r ;
        while(tmp_l < tmp_r) {
            if(s[tmp_l] != s[tmp_r]) {
                if(s[tmp_l] == chk_l) {
                    tmp_l++;
                    res2++;
                } else if(s[tmp_r] == chk_l) {
                    tmp_r--;
                    res2++;
                } else {
                    break;
                }
            } else {
                tmp_l++;
                tmp_r--;
            }
        }

        if(tmp_l < tmp_r) res2 = -1;
        if(res1 == -1 && res2 == -1) {
            cout << -1 << endl;
        } else if(res1 == -1) {
            cout << res2 << endl;
        } else if(res2 == -1) {
            cout << res1 << endl;
        } else {
            cout << min(res1,res2) << endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int s,t;
    cin >> s >> t;

    int res = 0;
    for(int a = 0; a <= s; a++) {
        for(int b = 0; b <= s - a;b++) {
            int c_sum = s - a - b;
            if(a * b == 0) {
                res+= c_sum + 1;
            } else {
                int c_mul = t / (a * b);
                res+= min(c_sum,c_mul) + 1;
            }
        }
    }

    cout << res << endl;
    return 0;
}


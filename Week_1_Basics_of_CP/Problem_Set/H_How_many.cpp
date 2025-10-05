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
            for(int c = 0; c <= s - a - b;c++) {
                if(a + b + c <= s && a * b * c <= t) {
                    res++;
                }
            }
        }
    }

    cout << res << endl;
    return 0;
}


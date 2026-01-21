#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    list<int> l;

    int n;
    cin >> n;

    int chk = n % 2;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if(i % 2 == chk) {
            l.push_back(val);
        } else {
            l.push_front(val);
        }
    }

    for(int val : l) {
        cout << val << " ";
    }
    return 0;
}


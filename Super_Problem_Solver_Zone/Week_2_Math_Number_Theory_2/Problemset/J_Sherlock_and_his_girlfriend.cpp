#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n == 1) {
        cout << 1 nl << 1 nl;
        return 0;
    }
    if(n == 2) {
        cout << 1 nl << "1 1" nl;
        return 0;
    }
    vector<int> color (n + 2, 2);

    for(int i = 2; i <= n + 1; i++) {
        if(color[i] == 2) {
            for(int j = i + i; j <= n + 1; j+=i) {
                color[j] = 1;
            }
        }
    }

    
    cout << 2 nl;
    for(int i = 2; i <= n + 1; i++) {
        cout << color[i] << " ";
    }
    cout nl;
}
#include<bits/stdc++.h>
using namespace std;

const int N = 30 + 9;
vector<int> divisors[N];
int main() {
    for(int i = 1; i < N; i++) {
        for(int j = i; j < N; j+=i) {
            divisors[j].push_back(i);
        }
    }

    int x;
    cin >> x;

    cout << divisors[x].size() << endl;
    for(int val : divisors[x]) {
        cout << val << " ";
    }
    cout << endl;
}
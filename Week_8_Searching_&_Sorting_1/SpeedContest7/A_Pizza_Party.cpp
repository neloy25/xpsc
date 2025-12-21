#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin >> a >> b;

    a++;

    int d = a * 4 + b * 3;
    cout << (d + 7) / 8 << endl;
    return 0;
}


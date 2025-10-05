#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin >> n >> x;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());
    int i = 0,cnt = 0,found = 0;
    while(i < n && arr[i] < x) {
        i++;
    }

    if(arr[i] == x) found++;

    cout << endl;
    cout << (x - i) + found << endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n;i++) {
        cin >> arr[i];
    }
    int a = 0,b = 0;

    int l = 0, r = n - 1;
    int move = 0;
    while(l <= r) {
        if(arr[l] > arr[r]) {
            if(move % 2) a+=arr[l];
            else b+=arr[l];
            l++;
        }else {
            if(move % 2) a+=arr[r];
            else b+=arr[r];
            r--;
        }
        move++;
    }

    cout << b << " " << a << endl;
    return 0;
}


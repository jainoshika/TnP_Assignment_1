#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    sort(arr.begin(), arr.end()) ;
    if (arr.size() >= 2) {
        cout<<max(arr[0]*arr[1], arr[n-1]*arr[n-2]);
    }
    return 0;
}
//O(nogn)
//O(n) -find 2 largest an ad2 smallest
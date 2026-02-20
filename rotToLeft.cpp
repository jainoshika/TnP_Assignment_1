#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int k;
    cin >> k;
    k%=n;
    reverse(arr.begin() + 0,arr.begin() + k-1);
    reverse(arr.begin() + k,arr.begin() + n-1);
    reverse(arr.begin() + 0,arr.begin() + n-1);
    return 0;
}
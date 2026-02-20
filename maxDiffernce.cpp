#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    int minSoFar = arr[0];
    int maxDiff = INT_MIN;
    //its like buy sell stock
    for (int i = 1; i < n; i++) {
        maxDiff = max(maxDiff, arr[i] - minSoFar);
        minSoFar = min(minSoFar, arr[i]);
    }

    cout << maxDiff;
    return 0;
}
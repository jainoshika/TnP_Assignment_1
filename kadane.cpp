#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    //edge case: all negative
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int maxSum = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << "Maximum Sum: " << maxSum;

    return 0;
}
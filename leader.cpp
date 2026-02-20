#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    vector<int> leaders;
    int maxRight = INT_MIN;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] > maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());

    for (int x : leaders)
        cout << x << " ";

    return 0;
}
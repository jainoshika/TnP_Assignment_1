#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &i : arr) cin >> i;

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    cout << "Minimum: " << mini << endl;
    cout << "Maximum: " << maxi << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    vector<int> res(n);

    res[0] = 1;
    for (int i = 1; i < n; i++)
        res[i] = res[i-1] * arr[i-1];

    int suffix = 1;
    for (int i = n-1; i >= 0; i--) {
        res[i] *= suffix;
        suffix *= arr[i];
    }

    for (int x : res)
        cout << x << " ";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
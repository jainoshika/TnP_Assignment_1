#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &i : arr) cin >> i;

    bool isSorted = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }
    if (isSorted)
        cout << "Array is sorted\n";
    else
        cout << "Array is not sorted\n";

    return 0;
}
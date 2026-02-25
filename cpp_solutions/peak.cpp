#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int low = 0, high = n - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (arr[mid] > arr[mid + 1])
            high = mid;
        else
            low = mid + 1;
    }

    cout << "Peak Element: " << arr[low];

    return 0;
}
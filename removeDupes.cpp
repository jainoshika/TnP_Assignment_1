//assuming if array is sorted - O(n) else sort and do O(nlogn)
//else use unordered_set - O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &i : arr) cin >> i;
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    cout << "After removing duplicates:\n";
    for (int k = 0; k <= i; k++)
        cout << arr[k] << " ";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &i : arr) cin >> i;

    int val;
    cin >> val;

    int index = 0;
    //copy further elements and shift by 1
    for (int i = 0; i < n; i++) {
        if (arr[i] != val) {
            arr[index++] = arr[i];
        }
    }
    cout << "Array after removal:\n";
    for (int i = 0; i < index; i++)
        cout << arr[i] << " ";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &i : arr) cin >> i;
    unordered_set<int> seen;
    unordered_set<int> duplicates;

    for (int i = 0; i < n; i++) {
        if (seen.count(arr[i]))
            duplicates.insert(arr[i]);
        else
            seen.insert(arr[i]);
    }
    cout << "Duplicates:\n";
    for (int x : duplicates)
        cout << x << " ";

    return 0;
}
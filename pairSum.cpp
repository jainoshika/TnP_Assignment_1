#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &i : arr) cin >> i;

    int target;
    cin >> target;

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (s.count(complement)) {
            cout << "Pair found: " << arr[i] << " and " << complement << endl;
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "No pair found\n";
    return 0;
}
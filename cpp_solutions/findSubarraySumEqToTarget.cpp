#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int target;
    cin >> target;

    unordered_map<int, int> mp; // prefixSum -> index
    int prefixSum = 0;
    int l = -1;
    int r = -1;
    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        if (prefixSum == target) {
            l = 0, r = i;
        }
        if (mp.count(prefixSum - target)) {
            l = mp[prefixSum - target] + 1;
            r = i;
           break;
        }

        mp[prefixSum] = i;
    }

    if (l== -1 && r == -1) cout << "No subarray found\n";
    else {
        for (int i = l ; i <= r ;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
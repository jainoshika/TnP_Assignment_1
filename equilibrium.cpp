#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int total = 0;
    for (int x : arr) total += x;

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];
        if (leftSum == rightSum) {
            cout << "Equilibrium index: " << i;
            return 0;
        }
        leftSum += arr[i];
    }
    cout<<"None";
    return 0;
}
//O(!)??

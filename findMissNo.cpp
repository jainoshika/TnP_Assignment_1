#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    //O(n) - TC
    //Approach 2 - use XOR with 1 to n
    vector<int> arr(n - 1);
    for (int &i : arr) cin >> i;

    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int x : arr)
        sum += x;

    cout << "Missing number: " << total - sum << endl;

    return 0;
}
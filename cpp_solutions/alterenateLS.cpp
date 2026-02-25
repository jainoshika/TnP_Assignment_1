#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    vector<int> res;
    int left = 0, right = n - 1;

    while (left <= right) {
        if (left != right)
            res.push_back(arr[right--]);
        res.push_back(arr[left++]);
    }

    for (int x : res)
        cout << x << " ";

    return 0;
}
//O(!)??

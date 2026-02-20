#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int k;
    cin >> k;
    priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);

        if (pq.size() > k)
            pq.pop();
    }

    cout << pq.top();
    return 0;
}
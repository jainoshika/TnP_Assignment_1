#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    unordered_set<int> s(arr.begin(), arr.end());

    int longest = 0;
    for (int x : s) {
        if (!s.count(x - 1)) {  // start of sequence, if no prev found then count from hre 
            int curr = x;
            int count = 1;

            while (s.count(curr + 1)) {
                curr++;
                count++;
            }

            longest = max(longest, count);
        }
    }
}
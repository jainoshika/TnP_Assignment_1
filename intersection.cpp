#include <bits/stdc++.h>
using namespace std;
//if sorted arrays then use 2 pointer, O(1) spcae
//or else sort current arrays, and 2 ptr

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    unordered_set<int> s(a.begin(), a.end());
    unordered_set<int> result;

    for (int x : b) {
        if (s.count(x))
            result.insert(x);
    }

    for (int x : result)
        cout << x << " ";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0;
    int j = 0;
    vector<int>ans;
    while (i < n && j < m) {
        if (a[i] <= b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else {
            ans.push_back(b[j++]);
        }
    }

    for (int x : ans)
        cout << x << " ";

    return 0;
}
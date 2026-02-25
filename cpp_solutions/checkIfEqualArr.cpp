#include <bits/stdc++.h>
using namespace std;
//app 2: unorderd_map for linear complexity (time and space)
int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)
        cout << "Arrays are equal\n";
    else
        cout << "Arrays are not equal\n";

    return 0;
}
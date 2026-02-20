#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    int c = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            c = arr[i];
        }

        if (arr[i] == c)
            count++;
        else
            count--;
    }
    cout << "Majority Element: " << c;
    return 0;
}
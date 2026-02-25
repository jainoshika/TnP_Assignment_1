#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr) {
    int l = 0;
    int r = arr.size()-1;
    while (l < r) {
        swap(arr[l++], arr[r--]);
    }
}
void print(vector<int>&arr) {
    for (int &i : arr) cout << i << " ";
    cout<<endl;
}
int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int &i : arr) cin >> i;
    reverse(arr);
    print(arr);
    return 0;
}
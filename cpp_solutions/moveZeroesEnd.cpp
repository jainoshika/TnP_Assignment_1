#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &i : arr) cin >> i;
    // 1 0 2 0 1 2
    int zero = 0 ;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] != 0) {
            //found non zero, swap with prev 0
            swap(arr[zero], arr[i]);
            zero++;
        }
    }
    
    return 0;
}
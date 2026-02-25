#include <bits/stdc++.h>
using namespace std;
void print(vector<int>&arr) {
    for (int &i : arr) cout << i << " ";
    cout<<endl;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &i : arr) cin >> i;
    int k;
    cin >> k;
    //0->3, 1->4, 2->5,3->0,4->1,5->2 k = 3
    vector<int>rot = arr;
    for (int i = 0 ; i < n ; i++) {
        rot[i] = arr[(i+k)%n];
    }
    print(rot);
    return 0;
}
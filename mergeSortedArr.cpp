#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    //assume arr1 has m spaces atlast
    //if not then create a new array
    vector<int> arr1(n + m);
    vector<int> arr2(m);

    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j])
            arr1[k--] = arr1[i--];
        else
            arr1[k--] = arr2[j--];
    }

    while (j >= 0)
        arr1[k--] = arr2[j--];

    for (int x : arr1)
        cout << x << " ";

    return 0;
}
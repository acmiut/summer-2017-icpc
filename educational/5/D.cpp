#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> columns(n, 0);  // create a vector of n zeros
    for (int i = 0; i < n; i++)
        cin >> columns[i];
    sort(columns.begin(), columns.end());

    cout << columns[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << columns[i];
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    cin.get();
    vector<string> original(n, ""), required(n, "");
    for (int i = 0; i < n; i++)
      getline(cin, original[i]);
    for (int i = 0; i < n; i++)
      getline(cin, required[i]);

    int i, j;
    for (i = n - 1, j = n - 1; i >= 0; i--)
      if (original[i] == required[j])
        j--;

    for (; j >= 0; j--)
      cout << required[j] << endl;
    cout << endl;
  }

  return 0;
}

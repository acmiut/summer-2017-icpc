#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  while (cin >> n && n) {
    vector<int> original, target;
    while (n--) {
      int o, t; cin >> o >> t;
      original.push_back(o);
      target.push_back(t);
    }
    sort(original.begin(), original.end());
    sort(target.begin(), target.end());
    if (original == target)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}

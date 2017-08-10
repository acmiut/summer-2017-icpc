#include <bits/stdc++.h>  // include everything we may need further!

using namespace std;

int main() {
  int n;
  while (cin >> n && n) { // this means first input n, then check if n is not zero
    vector<int> ans;
    for (int i = 0; i < n; i++) {
      int a; cin >> a;
      if (a > 0)  // ignore all zeros
        ans.push_back(a);
    }
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i];
      if (i < ans.size() - 1)
        cout << ' ';  // print a single space "between" the members of the sub-sequence
      else
        cout << endl;  // print a new line "after" all the sub-sequence
    }
    if (ans.empty())
      cout << '0' << endl;  // all of the sequence members are zero, so print a single zero as output
  }

  return 0;
}

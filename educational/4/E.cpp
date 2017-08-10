#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, t;
  while (cin >> s >> t) {
    int sp = 0, tp = 0;  // s_pointer and t_pointer
    while (sp < s.size() && tp < t.size()) {
      if (s[sp] == t[tp]) {
        sp++; tp++;
      } else {
        tp++;
      }
    }

    if (sp == s.size())
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}

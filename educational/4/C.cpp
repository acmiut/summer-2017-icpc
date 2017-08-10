#include <bits/stdc++.h>  // this also includes <set>

using namespace std;

int main() {
  int n; cin >> n;
  set<int> levels;

  int x; cin >> x;
  while (x--) {  // equivalent to: for(int i = 0; i < x; i++)
    int a; cin >> a;
    levels.insert(a);
  }

  int y; cin >> y;
  while (y--) {
    int a; cin >> a;
    levels.insert(a);
  }

  if (levels.size() == n)
    cout << "I become the guy." << endl;
  else
    cout << "Oh, my keyboard!" << endl;

  return 0;
}

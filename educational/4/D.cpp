#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> groups(5, 0);  // groups = [0, 0, 0, 0, 0]

  int n; cin >> n;
  while (n--) {
    int s; cin >> s;
    groups[s]++;
  }

  int taxis = 0;

  taxis += groups[4]; // each group with size = 4 should ride a separate taxi

  int one_three = min(groups[1], groups[3]);
  taxis += one_three;  // groups with size = 3 and 1 can ride together
  taxis += groups[3] - one_three;  // ride the remaining 3-sized groups if there is any
  groups[1] -= one_three;

  int two_two = groups[2] / 2;
  taxis += two_two;  // groups with size = 2 can ride together
  groups[2] %= 2;

  // if there is still a single group with size = 2,
  // take a taxi for them
  // bark two persons with groups size = 1 (if any)
  if (groups[2] == 1) {
    taxis++;
    groups[1] -= 2;
  }

  int one_one_one_one = groups[1] / 4;
  taxis += one_one_one_one;  // 4 group of size = 1 can ride together
  groups[1] -= one_one_one_one * 4;

  if (groups[1] > 0)
    taxis++;  // if anyone is left, take the last taxi for them

  cout << taxis << endl;

  return 0;
}

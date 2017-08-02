#include <iostream>
using namespace std;

// Because n <= 50
int h[50];

int main() {
  int set_number = 0;
  while (true) {
    set_number += 1;

    int n;
    cin >> n;

    // The input is terminated by a set starting with n = 0
    if (n == 0)
      break;

    for (int i = 0; i < n; i++)
      cin >> h[i];

    int sum_of_all_h = 0;
    for (int i = 0; i < n; i++)
      sum_of_all_h += h[i];

    // M is the equal height of all stacks
    int M = sum_of_all_h / n;

    int required_moves = 0;

    for (int i = 0; i < n; i++)
      if (h[i] > M)
        required_moves += h[i] - M;


    cout << "Set #" << set_number << endl;
    cout << "The minimum number of moves is " << required_moves << "." << endl;
    cout << endl;
  }
  return 0;
}

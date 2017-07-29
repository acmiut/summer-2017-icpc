#include <iostream>

using namespace std;

// Because n <= 100
int matrix[100][100];

int main() {
  while (true) {
    int n;
    cin >> n;

    // Input will be terminated by a value of 0 for n
    if (n == 0)
      break;

    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        cin >> matrix[i][j];

    int oddRowsCount = 0;
    int oddColumnsCount = 0;

    int oddRowIndex = -1;
    int oddColumnIndex = -1;

    // Check every row
    for (int i = 0; i < n; i++) {
      int rowSum = 0;
      for (int j = 0; j < n; j++)
        rowSum += matrix[i][j];

      if (rowSum % 2 == 1) {
        oddRowsCount ++;
        oddRowIndex = i + 1;
      }
    }

    // Then check every column
    for (int j = 0; j < n; j++) {
      int columnSum = 0;
      for (int i = 0; i < n; i++)
        columnSum += matrix[i][j];

      if (columnSum % 2 == 1) {
        oddColumnsCount ++;
        oddColumnIndex = j + 1;
      }
    }


    if (oddColumnsCount == 0 && oddRowsCount == 0)
      cout << "OK" << endl;
    else if (oddColumnsCount == 1 && oddRowsCount == 1)
      cout << "Change bit (" << oddRowIndex << "," << oddColumnIndex << ")" << endl;
    else
      cout << "Corrupt" << endl;
  }
  return 0;
}

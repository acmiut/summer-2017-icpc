#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector<int> numbers;

	int number;
	while(cin >> number) {
		numbers.push_back(number);
		sort(numbers.begin(), numbers.end());

		if (numbers.size() % 2 == 1) {
			int middle = numbers.size() / 2;
			
			cout << numbers[middle] << endl;
		}
		else {
			int middle1 = (numbers.size() - 1) / 2;
			int middle2 = middle1 + 1;

			cout << (numbers[middle1] + numbers[middle2]) / 2 << endl;
		}
	}
	return 0;
}
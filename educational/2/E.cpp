#include <iostream>
#include <set>

using namespace std;

int main() {
	int n, m;

	while(true) {
		cin >> n >> m;

		// The input is terminated by a line containing two zeros.
		if (n == 0 && m ==0)
			break;

		set<int> jacksCDs;

		for (int i = 0; i < n; ++i)
		{
			int cdNumber;
			cin >> cdNumber;

			jacksCDs.insert(cdNumber);
		}

		int commonCDNumber = 0;
		for (int i = 0; i < m; ++i)
		{
			int cdNumber;
			cin >> cdNumber;

			if (jacksCDs.find(cdNumber) != jacksCDs.end())
				commonCDNumber ++;
		}

		cout << commonCDNumber << endl;
	}
}
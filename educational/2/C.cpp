#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {

	int testCases;
	cin >> testCases;

	// input reading stuff, not important
	string trash;
	getline(cin, trash);
	getline(cin, trash);

	for (int test = 0; test < testCases; ++test)
	{
		map<string, int> treeCount;
		int totalTrees = 0;
		string treeName;
		
		while(getline(cin, treeName)) {
			
			// ignore the blank line between tests
			if (treeName == "")
				break;

			treeCount[treeName] ++;
			totalTrees ++;
		}

		// Print a blank line between 2 consecutive test cases.
		if (test > 0)
			cout << endl;

		// we are going to iterate over all the saved items in our map
		// "auto" is cpp 11
		for (auto it = treeCount.begin(); it != treeCount.end(); it++)
		{
			auto tree = *it;

			// tree.fisrt is the tree name (string)
			// tree.second is the count (int)
			string name = tree.first;
			int count = tree.second;

			double percentage = 100.0 * (double) count / totalTrees;

			// printing the output
			cout << name << " " << fixed << setprecision(4) << percentage << endl;
		}
	}
	return 0;
}
#include <iostream>
#include <map>

using namespace std;

int main() {
	int testCases;
	cin >> testCases;

	for (int test = 0; test < testCases; ++test)
	{
		map<string, int> sparrow;

		// N represents the number of subjects Sparrow is comfortable with
		int n;
		cin >> n;

		for (int i = 0; i < n; ++i)
		{
			string subject;
			int days;

			cin >> subject >> days;

			sparrow[subject] = days;
		}

		int d;
		cin >> d;

		string homeworkSubject;
		cin >> homeworkSubject;


		cout << "Case " << test+1 << ": ";

		if (sparrow.find(homeworkSubject) == sparrow.end()){
			// it means sparrow is not cofortable with this subject
			// this subject is not added to our map
			cout << "Do your own homework!" << endl;
		}
		else if (sparrow[homeworkSubject] <= d) {
			cout << "Yesss" << endl;
		}
		else if (sparrow[homeworkSubject] <= d + 5) {
			cout << "Late" << endl;
		}
		else {
			cout << "Do your own homework!" << endl;
		}
	}
	return 0;
}
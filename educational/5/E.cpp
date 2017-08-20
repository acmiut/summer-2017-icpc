#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, int> registered;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string username;
		cin >> username;
		if (registered[username] == 0) {
			cout << "OK" << endl;
		} else {
			cout << username << registered[username] << endl;
		}
		registered[username] ++;
	}
	return 0;
}
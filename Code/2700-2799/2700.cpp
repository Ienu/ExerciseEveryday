#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	char c, r;
	cin >> str >> c >> r;
	int i;
	for (i = 0; i < str.length(); ++i) {
		if (str[i] == c) {
			str[i] = r;
		}
	}
	cout << str << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main() {
	char cstr[501];
	cin.getline(cstr, 501);
	string str(cstr);
	int i, j;
	for (i = 0; i < str.length(); ++i) {
		if (str[i] == ' ') {
			cout << str[i];
			continue;
		}
		string sub;
		while (str[i] != ' ' && i < str.length()) {
			sub.push_back(str[i++]);
		}
		for (j = sub.length() - 1; j >= 0; --j) {
			cout << sub[j];
		}
		i--;
	}
	cout << endl;
	return 0;
}

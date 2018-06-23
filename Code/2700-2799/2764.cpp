#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	while (str.length() > 1) {
		int i, sum = 0;
		for (i = 0; i < str.length(); ++i) {
			sum += str[i] - '0';
		}
		char cstr[10];
		sprintf(cstr, "%d", sum);
		str = string(cstr);
	}
	cout << str << endl;
	return 0;
}

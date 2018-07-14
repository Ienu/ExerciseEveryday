#include <iostream>
#include <string>
using namespace std;
void fullArr(string head, string str) {
	int i;
	if (str.length() > 1) {
		for (i = 0; i < str.length(); ++i) {
			string rest = str;
			rest.erase(rest.begin() + i);
			fullArr(head + str[i], rest);
		}
	}
	else {
		cout << head << str << endl;
	}
}
int main() {
	string str;
	cin >> str;
	fullArr(string(""), str);
	return 0;
}

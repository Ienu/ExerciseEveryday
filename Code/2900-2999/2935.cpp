#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int x = 3;
inline int cal(string str) {
	int pos = str.find('x');
	int p = str.find('^');
	int c = 1, e = 1, y = x;
	if (p != -1) {
		e = stod(str.substr(p + 1));
	}
	if (pos == -1) {
		y = 1;
		return stod(str);
	}
	else if (pos != 0) {
		string s = str.substr(0, pos);
		c = (s == "-" ? -1 : stod(s));
	}
	return c * pow(y, e);
}
int main() {
	string str;
	while (cin >> str) {
		int i, last = 0, sgn = 1, val = 0;
		for (i = 1; i < str.size(); ++i) {
			if (str[i] == '+' || str[i] == '-') {
				val += sgn * cal(str.substr(last, i - last));
				sgn = (str[i] == '+' ? 1 : -1);
				last = i + 1;
			}
		}
		cout << val + sgn * cal(str.substr(last)) << endl;
	}
	return 0;
}

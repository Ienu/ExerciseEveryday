#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	while (cin >> str) {
		string src = str, res(str.length(), ' ');
		for (int i = 0; i < str.length(); ++i) {
			if (str[i] == ')') {
				bool bf = false;
				for (int j = i - 1; j >= 0; --j) {
					if (str[j] == '(') {
						str[j] = ',';
						str[i] = '.';
						bf = true;
						break;
					}
				}
				if (bf == false) {
					res[i] = '?';
				}
			}
		}
		for (int i = 0; i < str.length(); ++i) {
			if (str[i] == '(') {
				res[i] = '$';
			}
		}
		cout << src << endl << res << endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, i, j;
	cin >> n;
	string str;
	for (i = 0; i < n; ++i) {
		cin >> str;
		int m = str.length() % 4;
		if (m != 0) {
			str = string(4 - str.length() % 4, '0') + str;
		}
		int len = str.length();
		string res(len / 4, '0');
		for (j = len - 1; j >= 0; j -= 4) {
			int v = ((str[j - 3] - '0') << 3) 
				+ ((str[j - 2] - '0') << 2) 
				+ ((str[j - 1] - '0') << 1) 
				+ str[j] - '0';
			if (v < 10) {
				res[j / 4] += v;
			}
			else {
				res[j / 4] = 'A' + v - 10;
			}
		}
		cout << res << endl;
	}
	return 0;
}

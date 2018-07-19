#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int i, j, q[10] = { 0 };
	for (i = 0; i < str.length(); ++i) {
		int num = str[i] - '0';
		for (j = 2; j <= 9; ++j) {
			q[j] = (num + q[j] * 10) % j;
		}
	}
	bool b = false;
	for (i = 2; i <= 9; ++i) {
		if (q[i] == 0) {
			b = true;
			cout << i << " ";
		}
	}
	cout << (b ? "" : "none") << endl;
	return 0;
}

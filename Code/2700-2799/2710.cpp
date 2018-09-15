#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int a, b, i, d;
	string str;
	cin >> a >> str >> b;
	long res = 0, base = 1;
	for (i = str.length() - 1; i >= 0; --i) {
		char c = str[i];
		if (c >= '0' && c <= '9') {
			d = c - '0';
		}
		else if (c >= 'a' && c <= 'f') {
			d = c - 'a' + 10;
		}
		else {
			d = c - 'A' + 10;
		}
		res += d * base;
		base *= a;
	}
	vector<int> dst;
	if (res == 0) {
		cout << res << endl;
		return 0;
	}
	while (res > 0) {
		dst.push_back(res % b);
		res /= b;
	}
	for (i = dst.size() - 1; i >= 0; --i) {
		if (dst[i] >= 10) {
			cout << char(dst[i] - 10 + 'A');
		}
		else {
			cout << dst[i];
		}
	}
	cout << endl;
	return 0;
}

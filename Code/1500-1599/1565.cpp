#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int i;
	while (cin >> str && str != "0") {
		long sum = 0, bin = 1;
		for (i = str.length() - 1; i >= 0; --i) {
			bin <<= 1;
			sum += (str[i] - '0') * (bin - 1);
		}
		cout << sum << endl;
	}
	return 0;
}

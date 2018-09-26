#include <iostream>
#include <string>
using namespace std;
int main() {
	int t, i, k, j;
	cin >> t;
	for (i = 0; i < t; ++i) {
		string str;
		cin >> str >> k;
		int idx = 0;
		for (j = 0; j + 1 < str.length(); ++j) {
			if (str[j] > str[j + 1]) {
				str.erase(str.begin() + j);
				j = j - 2 > -1 ? j - 2 : -1;
				idx++;
			}
			if (idx == k) {
				break;
			}
		}
		cout << str.substr(0, str.length() - k + idx) << endl;
	}
	return 0;
}

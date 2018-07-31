#include <iostream>
using namespace std;
int main() {
	char cstr[201];
	while (cin.getline(cstr, 201)) {
		int i, idx = 0, pos = -1, maxlen = 0;
		while (cstr[idx] != '\0') {
			int len = 0;
			while ((cstr[idx] >= 'a' && cstr[idx] <= 'z')
				|| (cstr[idx] >= 'A' && cstr[idx] <= 'Z')) {
				len++;
				idx++;
			}
			if (len >= maxlen) {
				maxlen = len;
				pos = idx - len;
			}
			idx++;
		}
		for (i = pos; i < pos + maxlen; ++i) {
			cout << cstr[i];
		}
		cout << endl;
	}
	return 0;
}

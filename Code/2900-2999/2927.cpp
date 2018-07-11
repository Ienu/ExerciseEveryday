#include <iostream>
using namespace std;
int main() {
	char cstr[100];
	while (cin.getline(cstr, 100)) {
		int i, idx = 0, num[10] = { 0 };
		while (cstr[idx] != '\0') {
			if (cstr[idx] >= '0' && cstr[idx] <= '9') {
				num[cstr[idx] - '0']++;
			}
			idx++;
		}
		for (i = 0; i < 10; ++i) {
			if (num[i] != 0) {
				cout << i << ":" << num[i] << endl;
			}
		}
	}
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	char cstr[81];
	int i, j, idx, alp[26] = { 0 }, maxa = 0, mIdx = -1;
	for (i = 0; i < 4; ++i) {
		idx = 0;
		cin.getline(cstr, 81);
		while (cstr[idx] != '\0') {
			if (cstr[idx] >= 'A' && cstr[idx] <= 'Z') {
				alp[cstr[idx] - 'A']++;
			}
			idx++;
		}
	}
	for (i = 0; i < 26; ++i) {
		if (alp[i] > maxa) {
			maxa = alp[i];
			mIdx = i;
		}
	}
	for (i = 0; i < maxa; ++i) {
		for (j = 0; j < 26; ++j) {
			if (alp[j] >= maxa - i) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	for (i = 0; i < 26; ++i) {
		cout << char(i + 'A') << " ";
	}
	cout << endl;
	return 0;
}

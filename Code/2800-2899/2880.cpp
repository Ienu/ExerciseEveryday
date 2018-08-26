#include <iostream>
using namespace std;
int main() {
	char cstr[41];
	cin.getline(cstr, 41);
	int idx = 0, mlen = 0, mIdx = 0;
	while (cstr[idx] != '\0') {
		if (cstr[idx] == ' ') {
			idx++;
			continue;
		}
		int len = 0, lidx;
		if (cstr[idx] != ' ') {
			lidx = idx;
			while (cstr[idx] != ' ') {
				len++;
				if (cstr[idx] == '\0') break;
				idx++;
			}
		}
		if (len > mlen) {
			mlen = len;
			mIdx = lidx;
		}
	}
	char res[41];
	for (idx = 0; idx < mlen; ++idx) {
		res[idx] = cstr[mIdx + idx];
	}
	res[idx] = '\0';
	cout << res << endl;
	return 0;
}

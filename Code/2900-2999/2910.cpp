#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char cstr[101];
	cin.getline(cstr, 101);
	int i, num = 0;
	bool b = false;
	for (i = 0; i < strlen(cstr); ++i) {
		if (cstr[i] >= '0' && cstr[i] <= '9') {
			if (!b) {
				b = true;
			}
			num *= 10;
			num += cstr[i] - '0';
		}
		else {
			if (b) {
				cout << num << endl;
			}
			num = 0;
			b = false;
		}
	}
	if (b) {
		cout << num << endl;
	}
	return 0;
}

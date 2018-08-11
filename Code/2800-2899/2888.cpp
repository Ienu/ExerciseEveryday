#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	char cstr[21];
	while (cin.getline(cstr, 21)) {
		int num[10] = { 0 }, i = 0;
		while (cstr[i] != '\0') {
			if (cstr[i] >= '0' && cstr[i] <= '9') {
				num[cstr[i] - '0']++;
			}
			i++;
		}
		for (i = 0; i < 10; ++i) {
			while (num[i] > 0) {
				cout << setw(4) << i;
				num[i]--;
			}
		}
		cout << endl;
	}
	return 0;
}

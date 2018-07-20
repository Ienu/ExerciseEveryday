#include <iostream>
using namespace std;
int main() {
	int n, i;
	char cstr[101];
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> cstr;
		int sign = 1, idx = 0, sum = 0;
		while (cstr[idx] != '\0') {
			if (cstr[idx++] >= 'a') {
				if (sign == -1) {
					sum++;
					sign = 1;
				}
			}
			else {
				if (sign == 1) {
					sum++;
					sign = -1;
				}
			}
			sum++;
		}
		cout << sum << endl;
	}
	return 0;
}

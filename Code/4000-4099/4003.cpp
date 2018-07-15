#include <iostream>
using namespace std;
int main() {
	int T, i;
	cin >> T;
	for (i = 0; i < T; ++i) {
		char h[10];
		cin >> h;
		long long sum = 0;
		int idx = 0;
		while (h[idx] != '\0') {
			if (h[idx] >= '0' && h[idx] <= '9') {
				sum <<= 4;
				sum += h[idx] - '0';
			}
			else {
				sum <<= 4;
				sum += h[idx] - 'A' + 10;
			}
			idx++;
		}
		cout << sum << endl;
	}
	return 0;
}

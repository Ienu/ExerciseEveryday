#include <iostream>
using namespace std;
int main() {
	int n, i, j, num;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> num;
		long a[3] = { 1, 2, 5 };
		if (num < 4) {
			cout << a[num - 1] << endl;
		}
		else {
			for (j = 2; j < num; ++j) {
				a[2] = ((a[1] << 1) + a[0]) % 32767;
				a[0] = a[1];
				a[1] = a[2];
			}
			cout << a[2] << endl;
		}
	}
	return 0;
}

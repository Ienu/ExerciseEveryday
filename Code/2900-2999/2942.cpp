#include <iostream>
using namespace std;
int main() {
	int n, i, a[3] = { 1, 1, 2 };
	cin >> n;
	if (n < 3) {
		cout << a[n] << endl;
	}
	else {
		for (i = 0; i < n - 2; ++i) {
			a[0] = a[1];
			a[1] = a[2];
			a[2] = a[0] + a[1];
		}
		cout << a[2] << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int n, i, num, j;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> num;
		if (num == 1 || num == 2) {
			cout << "1" << endl;
		}
		else {
			int x1 = 1, x2 = 1, x3;
			for (j = 2; j < num; ++j) {
				x3 = (x1 + x2) % 1000;
				x1 = x2;
				x2 = x3;
			}
			cout << x3 << endl;
		}
	}
	return 0;
}

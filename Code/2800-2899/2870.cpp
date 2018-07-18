#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int i, j, a[3][3], b[3][3];
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			cin >> b[i][j];
		}
	}
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			cout << setw(4) << a[i][j] + b[i][j];
		}
		cout << endl;
	}
	return 0;
}

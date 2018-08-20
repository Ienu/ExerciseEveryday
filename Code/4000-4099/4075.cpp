#include <iostream>
using namespace std;
int main() {
	int m, i, n, j ,k;
	cin >> m;
	for (i = 0; i < m; ++i) {
		cin >> n;
		int **data = new int*[n];
		for (j = 0; j < n; ++j) {
			data[j] = new int[n];
			for (k = 0; k < n; ++k) {
				cin >> data[j][k];
			}
		}
		for (k = 0; k < n; k++) {
			for (j = n - 1; j >= 0; --j) {
				cout << data[j][k];
				if (j > 0) {
					cout << " ";
				}
			}
			cout << endl;
		}
		for (j = 0; j < n; ++j) {
			delete[] data[j];
		}
		delete[] data;
	}
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int n, i, j, sum = 0;
	cin >> n;
	int **data = new int*[n];
	for (i = 0; i < n; ++i) {
		data[i] = new int[n];
		for (j = 0; j < n; ++j) {
			cin >> data[i][j];
		}
	}
	for (i = 1; i < n - 1; ++i) {
		for (j = 1; j < n - 1; ++j) {
			if (data[i][j] + 50 <= data[i - 1][j]
				&& data[i][j] + 50 <= data[i + 1][j]
				&& data[i][j] + 50 <= data[i][j - 1]
				&& data[i][j] + 50 <= data[i][j + 1]) {
				j++;
				sum++;
			}
		}
	}
	cout << sum << endl;
	for (i = 0; i < n; ++i) {
		delete[] data[i];
	}
	delete[] data;
	return 0;
}

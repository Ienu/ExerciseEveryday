#include <iostream>
#include <iomanip>
using namespace std;
int fun(int data[5][5], int n, int m) {
	if (n < 0 || n > 4 || m < 0 || m > 4) {
		return 0;
	}
	int temp, i;
	for (i = 0; i < 5; ++i) {
		temp = data[n][i];
		data[n][i] = data[m][i];
		data[m][i] = temp;
	}
	return 1;
}
int main() {
	int data[5][5], n, m, i, j;
	for (i = 0; i < 5; ++i) {
		for (j = 0; j < 5; ++j) {
			cin >> data[i][j];
		}
	}
	cin >> n >> m;
	if (fun(data, n, m)) {
		for (i = 0; i < 5; ++i) {
			for (j = 0; j < 5; ++j) {
				cout << setw(4) << data[i][j];
			}
			cout << endl;
		}
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}

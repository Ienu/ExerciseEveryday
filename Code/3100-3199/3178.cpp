#include <iostream>
using namespace std;
int main() {
	int n, i, j;
	cin >> n;
	for (i = 2; i <= n; ++i) {
		int sum = 0;
		for (j = 1; j <= i / 2; ++j) {
			if (i % j == 0) {
				sum++;
			}
		}
		if (sum % 2 == 1) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}

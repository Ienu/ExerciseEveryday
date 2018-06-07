#include <iostream>
using namespace std;
int main() {
	int a, b, c, i, j, sum = 0;
	cin >> a >> b >> c;
	for (i = 0; i <= c / a + 1; ++i) {
		for (j = 0; j <= c / b + 1; ++j) {
			if (a * i + b * j == c) {
				sum++;
			}
		}
	}
	cout << sum << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	for (i = 0; i < n; ++i) {
		int num, sum = 0;
		cin >> num;
		while (num > 0) {
			if (num % 2 == 1) {
				sum++;
			}
			num /= 2;
		}
		cout << sum << endl;
	}
	return 0;
}

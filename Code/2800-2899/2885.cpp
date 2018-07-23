#include <iostream>
using namespace std;
int reverse(int n) {
	if (n == 0) {
		return 0;
	}
	int num = n;
	if (n < 0) {
		num = -n;
	}
	int i, vIdx = 0, v[15];
	while (num > 0) {
		v[vIdx++] = num % 10;
		num /= 10;
	}
	int sum = 0;
	for (i = 0; i < vIdx; ++i) {
		sum *= 10;
		sum += v[i];
	}
	if (n > 0) {
		return sum;
	}
	return -sum;
}
int main() {
	int n;
	while (cin >> n) {
		cout << reverse(n) << endl;
	}
	return 0;
}

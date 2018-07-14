#include <iostream>
using namespace std;
int apple(int left, int plate, int min) {
	if (plate == 1) {
		return 1;
	}
	int i, sum = 0;
	for (i = min; i <= (left - i) / (plate - 1); ++i) {
		sum += apple(left - i, plate - 1, i);
	}
	return sum;
}
int main() {
	int t, i, m, n;
	cin >> t;
	for (i = 0; i < t; ++i) {
		cin >> m >> n;
		cout << apple(m, n, 0) << endl;
	}
	return 0;
}

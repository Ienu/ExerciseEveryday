#include <iostream>
using namespace std;
int main() {
	int n, k, i;
	double price = 200;
	cin >> n >> k;
	for (i = 1; i < 21; ++i) {
		if (n * i >= price) {
			cout << i << endl;
			break;
		}
		else {
			price *= 1.0 + k / 100.0;
		}
	}
	if (i == 21) {
		cout << "Impossible" << endl;
	}
	return 0;
}

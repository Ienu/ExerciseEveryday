#include <iostream>
using namespace std;
int main() {
	int a, octn = 1, sum = 0;
	cin >> a;
	while(a != 0) {
		sum += a % 10 * octn;
		a /= 10;
		octn *= 8;
	}
	cout << sum << endl;
	return 0;
}

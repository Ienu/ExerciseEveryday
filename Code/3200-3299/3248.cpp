#include <iostream>
using namespace std;
int main() {
	int a, b, i;
	while (cin >> a >> b) {
		for (i = (a > b ? b : a); i >= 1; --i) {
			if (a % i == 0 && b % i == 0) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}

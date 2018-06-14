#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b, i, mi = 1;
	cin >> a >> b;
	for (i = 1; i <= (a > b ? b : a); ++i) {
		if (a % i == 0 && b % i == 0) {
			mi = i;
		}
	}
	cout << mi << " 0x" << hex << mi << " 0" << oct << mi << endl;
	return 0;
}

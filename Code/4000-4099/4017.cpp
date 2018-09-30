#include <iostream>
using namespace std;
int main() {
	int i, f[31] = { 1, 1 };
	for (i = 2; i < 31; ++i) {
		f[i] = f[i - 1] + f[i - 2];
	}
	while (cin >> i) {
		cout << f[i] << endl;
	}
	return 0;
}

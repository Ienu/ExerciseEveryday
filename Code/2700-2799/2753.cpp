#include <iostream>
using namespace std;
int main() {
	int n, i, num, f[20];
	f[0] = 1;
	f[1] = 1;
	for (i = 2; i < 20; ++i) {
		f[i] = f[i - 1] + f[i - 2];
	}
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> num;
		cout << f[num - 1] << endl;
	}
	return 0;
}

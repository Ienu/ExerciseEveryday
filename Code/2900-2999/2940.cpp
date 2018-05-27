#include <iostream>
using namespace std;
int main() {
	long a, n, sn = 0;
	cin >> a >> n;
	for (int i = n; i > 0; --i) {
		sn += a * i;
		a *= 10;
	}
	cout << sn << endl;
	return 0;
}

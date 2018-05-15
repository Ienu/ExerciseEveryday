#include <iostream>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	for (i = 10; i <= n; ++i) {
		if (i % (i / 10 + i % 10) == 0) {
			cout << i << endl;
		}
	}
	return 0;
}

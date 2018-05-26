#include <iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		cout << (n - n % 3) * (n / 3 + 1) / 2 << endl;
	}
	return 0;
}

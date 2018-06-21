#include <iostream>
using namespace std;
int main() {
	int k, n, i, num;
	cin >> k >> n;
	char op[10];
	for (i = 0; i < n; ++i) {
		cin >> op >> num;
		switch (op[1]) {
		case 'l':
			k += num;
			break;
		case 'i':
			k = k - num;
			break;
		case 'u':
			k *= num;
		}
	}
	cout << k << endl;
	return 0;
}

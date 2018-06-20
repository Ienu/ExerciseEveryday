#include <iostream>
using namespace std;
int main() {
	int i, num, p[3] = { 3, 5, 7 };
	while (cin >> num) {
		bool is = false;
		for (i = 0; i < 3; ++i) {
			if (num % p[i] == 0) {
				is = true;
				cout << p[i] << " ";
			}
		}
		if (is == false) {
			cout << "n";
		}
		cout << endl;
	}
	return 0;
}

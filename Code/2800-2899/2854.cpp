#include <iostream>
using namespace std;
int main() {
	double x, y;
	while (cin >> x >> y) {
		cout << ((x >= -1 && x <= 1 && y >= -1 && y <= 1) ? "yes" : "no") << endl;
	}
	return 0;
}

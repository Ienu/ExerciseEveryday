#include <iostream>
using namespace std;
int main() {
	int n, i, dis;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> dis;
		double tbike = dis / 3.0 + 50;
		double twalk = dis / 1.2;
		if (tbike > twalk) {
			cout << "Walk" << endl;
		}
		else if (tbike < twalk) {
			cout << "Bike" << endl;
		}
		else {
			cout << "All" << endl;
		}
	}
	return 0;
}

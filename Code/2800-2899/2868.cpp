#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	double num;
	while (cin >> num) {
		double root = 1.0;
		int sum = 1;
		while (fabs(root * root - num) > 1e-6) {
			root = 0.5 * (root + num / root);
			sum++;
		}
		cout << sum << " " << setprecision(2) << fixed << root << endl;
	}
	return 0;
}

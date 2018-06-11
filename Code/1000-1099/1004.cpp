#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double sum = 0.0;
	for(int i = 0; i < 12; ++i) {
		double m;
		cin >> m;
		sum += m;
	}
	sum /= 12.0;
	cout << "$" << fixed << setprecision(2) << sum << endl;
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, i;
	double sum = 0, p = 2, q = 1;
	cin >> n;
	for(i = 0; i < n; ++i) {
		sum += p / q;
		p += q;
		q = p - q;
	}
	cout << setprecision(4) << fixed << sum << endl;
	return 0;
}

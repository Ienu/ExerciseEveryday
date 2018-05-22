#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, i;
	double e = 1, num = 1;
	cin >> n;
	for(i = 1; i <= n; ++i) {
		num *= i;
		e += 1.0 / num;
	}
	cout << setprecision(10) << fixed << e << endl;
	return 0;
}

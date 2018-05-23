#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, i, age;
	double sum = 0;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> age;
		sum += age;
	}
	cout << setprecision(2) << fixed << sum / n << endl;
	return 0;
}

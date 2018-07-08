#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int k, i, j, num;
	double sum, price[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
	cin >> k;
	for(i = 0; i < k; ++i) {
		sum = 0;
		for(j = 0; j < 10; ++j) {
			cin >> num;
			sum += price[j] * num;
		}
		cout << setprecision(2) << fixed << sum << endl;
	}
	return 0;
}

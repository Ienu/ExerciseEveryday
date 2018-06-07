#include <iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n && n != 0) {
		int i = 1, sum = 0, left = n;
		while (left >= i) {
			sum += i * i;
			left -= i;
			i++;
		}
		sum += left * i;
		cout << n << " " << sum << endl;
	}
	return 0;
}

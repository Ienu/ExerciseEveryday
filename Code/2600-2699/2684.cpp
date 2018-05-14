#include <iostream>
using namespace std;
int main() {
	int n, i, sum = 0, s = 1;
	cin >> n;
	for(i = 1; i <= n; ++i) {
		s *= i;
		sum += s;
	}
	cout << sum << endl;
	return 0;
}

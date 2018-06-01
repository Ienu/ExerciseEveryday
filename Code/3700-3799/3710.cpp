#include <iostream>
using namespace std;
int main() {
	int n, i, A, B;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> A >> B;
		int diff = A ^ B, sum = 0;
		while (diff > 0) {
			sum += diff % 2;
			diff >>= 1;
		}
		cout << sum << endl;
	}
	return 0;
}

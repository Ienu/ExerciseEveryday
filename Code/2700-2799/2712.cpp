#include <iostream>
using namespace std;
int main() {
	int n, i, fm, fd, nm, nd, month[] = 
	{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	long sum;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> fm >> fd >> sum >> nm >> nd;
		cout << (sum << nd + month[nm - 1] - fd - month[fm - 1]) << endl;
	}
	return 0;
}

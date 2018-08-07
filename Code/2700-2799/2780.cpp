#include <iostream>
using namespace std;
int main() {
	int t, i, j, a[4];
	cin >> t;
	for (i = 0; i < t; ++i) {
		for (j = 0; j < 4; ++j)	{
			cin >> a[j];
			cout << a[j] << " ";
		}
		if (a[0] + a[3] == a[1] + a[2]) {
			cout << a[3] + a[2] - a[1] << endl;
		}
		else {
			cout << a[3] * a[2] / a[1] << endl;
		}
	}
	return 0;
}

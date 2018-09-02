#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int c[10], i;
	while (cin >> c[0] >> c[1] >> c[2] >> c[3] >> c[4] 
		>> c[5] >> c[6] >> c[7] >> c[8] >> c[9]) {
		vector<int> a, b;
		for (i = 0; i < 10; ++i) {
			if (c[i] % 2 != 0) {
				a.push_back(c[i]);
			}
			else {
				b.push_back(c[i]);
			}
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for (i = a.size() - 1; i >= 0; --i) {
			cout << a[i] << " ";
		}
		for (i = 0; i < b.size() - 1; ++i) {
			cout << b[i] << " ";
		}
		cout << b[i] << endl;
	}
	return 0;
}

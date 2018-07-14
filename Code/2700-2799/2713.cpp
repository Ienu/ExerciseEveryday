#include <iostream>
using namespace std;
int main() {
	int n, i, j, si, sj, fi, fj, v;
	bool start = true;
	cin >> n;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			cin >> v;
			if (v == 0) {
				if (start) {
					si = i;
					sj = j;
					start = false;
				}
				fi = i;
				fj = j;
			}
		}
	}
	cout << (fi - si - 1) * (fj - sj - 1) << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int n, m, i, j;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> m;
		int sum = 0, idx = 0, last = 0, now, g;
		for (j = 0; j < m + 1; ++j) {
			if (j < m) {
				cin >> now;
			}
			else {
				now = 100;
			}
			g = now - last;
			last = now;
			if (idx + g < 60) {
				sum += g;
			}
			else if(idx < 60) {
				sum += 60 - idx;
			}
			idx += g + 3;
		}
		cout << sum << endl;
	}
	return 0;
}

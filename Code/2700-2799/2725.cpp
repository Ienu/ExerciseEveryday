#include <iostream>
using namespace std;
int main() {
	int n, i, cur = 0, s = 0;
	cin >> n;
	int *sq = new int[n + 1];
	int *u = new int[n + 1];
	u[0] = 0;
	sq[0] = 1;
	for (i = 0; i < n; ++i) {
		cin >> sq[i + 1];
		u[i + 1] = 0;
		if (sq[i + 1] == 0) {
			u[i + 1] = 1;
			sq[i + 1] = 1;
		}
	}
	while (cur < n + 1) {
		int step = sq[cur];
		if (u[cur] == 1) {
			s++;
		}
		u[cur] = 1;
		sq[cur] = 1;
		cur += step;
		s++;
		if (cur < 0) {
			cur = 0;
		}
	}
	cout << s << endl;
	delete[] u;
	delete[] sq;
	return 0;
}

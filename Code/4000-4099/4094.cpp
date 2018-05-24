#include <iostream>
using namespace std;
int main() {
	int n, s, i, time, v, max = 0;
	cin >> n >> s;
	for (i = 0; i < n; ++i) {
		cin >> time >> v;
		int t = time + s / v;
		if (max < t) {
			max = t;
		}
	}
	cout << max << endl;
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int m, i, n, j;
	cin >> m;
	vector<int> vi = { 1, 1, 1, 2 };
	for (i = 0; i < m; ++i) {
		cin >> n;
		if (n >= vi.size()) {
			for (j = vi.size(); j <= n; ++j) {
				int v = vi[j - 2] + vi[j - 3] + vi[j - 4];
				vi.push_back(v);
			}
		}
		cout << vi[n] << endl;
	}
	return 0;
}

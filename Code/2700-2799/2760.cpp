#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, i, j, temp;
	cin >> n;
	vector<vector<double> > vv;
	for (i = 1; i <= n; ++i) {
		vector<double> v;
		for (j = 0; j < i; ++j) {
			cin >> temp;
			v.push_back(temp);
		}
		vv.push_back(v);
	}
	for (i = vv.size() - 2; i >= 0; --i) {
		for (j = 0; j < vv[i].size(); ++j) {
			double max = vv[i + 1][j];
			if (max < vv[i + 1][j + 1]) {
				max = vv[i + 1][j + 1];
			}
			vv[i][j] += max;
		}
	}
	cout << vv[0][0] << endl;
	return 0;
}

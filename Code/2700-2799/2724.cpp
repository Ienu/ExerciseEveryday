#include <iostream>
#include <string>
using namespace std;
int main() {
	string stu[100], s;
	int n, i, j, k, m, d, date[13][32][100] = { 0 };
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> s >> m >> d;
		date[m][d][0]++;
		date[m][d][date[m][d][0]] = i;
		stu[i] = s;
	}
	for (i = 1; i < 13; ++i) {
		for (j = 1; j < 32; ++j) {
			if (date[i][j][0] > 1) {
				cout << i << " " << j;
				for (k = 0; k < date[i][j][0]; ++k) {
					cout << " " << stu[date[i][j][k + 1]];
				}
				cout << endl;
			}
		}
	}
	return 0;
}

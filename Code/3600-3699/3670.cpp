#include <iostream>
using namespace std;
int main() {
	int data[5][5], i, j, mrow[5], 
		mcol[5] = { 1e7, 1e7, 1e7, 1e7, 1e7 }, mIdx[5] = { 0 };
	for (i = 0; i < 5; ++i) {
		int maxr = -1e7;
		for (j = 0; j < 5; ++j) {
			cin >> data[i][j];
			if (maxr < data[i][j]) {
				maxr = data[i][j];
				mrow[i] = j;
			}
			if (mcol[j] > data[i][j]) {
				mcol[j] = data[i][j];
				mIdx[j] = i;
			}
		}
	}
	bool bf = false;
	for (i = 0; i < 5; ++i) {
		if (mIdx[mrow[i]] == i) {
			cout << i + 1 << " " << mrow[i] + 1 << " " << data[i][mrow[i]] << endl;
			bf = true;
			break;
		}
	}
	if (bf == false) {
		cout << "not found" << endl;
	}
	return 0;
}

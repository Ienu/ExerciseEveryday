#include <iostream>
using namespace std;
int main() {
	int n, i, j, maxlen = 1;
	cin >> n;
	int *data = new int[n];
	int *lseq = new int[n];
	for (i = 0; i < n; ++i) {
		cin >> data[i];
		lseq[i] = 1;
		for (j = 0; j < i; ++j) {
			if (data[j] < data[i] && lseq[j] + 1 > lseq[i]) {
				lseq[i] = lseq[j] + 1;
			}
		}
		if (maxlen < lseq[i]) {
			maxlen = lseq[i];
		}
	}
	cout << maxlen << endl;
	delete[] lseq;
	delete[] data;
	return 0;
}

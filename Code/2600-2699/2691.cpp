#include <iostream>
using namespace std;
int main() {
	int n, i, k, j, plast, last, now;
	cin >> n;
	for(i = 0; i < n; ++i) {
		cin >> k;
		int* data = new int[k];
		for(j = 0; j < k; ++j) {
			cin >> data[j];
		}
		if(data[0] != data[1]) {
			cout << 0 << " ";
		}
		for(j = 1; j < k - 1; ++j) {
			if((data[j] > data[j - 1] && data[j] > data[j + 1])
				|| (data[j] < data[j - 1] && data[j] < data[j + 1])) {
				cout << j << " ";
			}
		}
		if(data[k - 1] != data[k - 2]) {
			cout << k - 1;
		}
		cout << endl;
		delete[] data;
	}
	return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int n, m, i;
	cin >> n >> m;
	int* book = new int[n];
	int* data = new int[m];
	memset(data, 0, sizeof(int) * m);
	for (i = 0; i < n; ++i) {
		cin >> book[i];
		data[book[i] - 1]++;
	}
	for (i = 0; i < n; ++i) {
		if (data[book[i] - 1] > 1) {
			cout << data[book[i] - 1] - 1 << endl;
		}
		else {
			cout << "BeiJu" << endl;
		}
	}
	delete[] book;
	delete[] data;
	return 0;
}

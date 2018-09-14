#include <iostream>
using namespace std;
void swapK(long *a, long *b) {
	long temp = *a;
	*a = *b;
	*b = temp;
}
long sortK(long* data, int k, int m, int n) {
	long base = data[m];
	int i = m, j = n;
	while (i < j) {
		while (i < j && data[j] >= base) {
			j--;
		}
		swapK(data + i, data + j);
		while (i < j && data[i] < base) {
			i++;
		}
		swapK(data + i, data + j);
	}
	if (k - 1 == i) {
		return data[i];
	}
	if (k - 1 > i) {
		return sortK(data, k, i + 1, n);
	}
	return sortK(data, k, m, i - 1);
}
int main() {
	int n, k, i;
	cin >> n >> k;
	long *data = new long[n];
	for (i = 0; i < n; ++i) {
		cin >> data[i];
	}
	cout << sortK(data, k, 0, n - 1) << endl;
	delete[] data;
	return 0;
}

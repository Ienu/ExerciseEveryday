#include <iostream>
using namespace std;
void swap(int* data, int i, int j) {
	int temp = data[i];
	data[i] = data[j];
	data[j] = temp;
}
int med(int* data, int m, int n, int k) {
	int a = data[m], i = m, j = n;
	while (i < j) {
		while (i < j && a <= data[j]) {
			j--;
		}
		swap(data, i, j);
		while (i < j && a > data[i]) {
			i++;
		}
		swap(data, i, j);
	}
	if (i == k - 1) {
		return data[i];
	}
	if (i > k - 1) {
		return med(data, m, i - 1, k);
	}
	return med(data, i + 1, n, k);
}
int main() {
	int n, i;
	cin >> n;
	int *data = new int[n];
	for (i = 0; i < n; ++i) {
		cin >> data[i];
	}
	cout << med(data, 0, n - 1, (n + 1) / 2) << endl;
	delete[] data;
	return 0;
}

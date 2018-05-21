#include <iostream>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	int* data = new int[n];
	for(i = 0; i < n; ++i) {
		cin >> data[i];
	}
	for(i = n - 1; i >= 0; --i) {
		cout << data[i] << " ";
	}
	cout << endl;
	delete[] data;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int n, i;
	while (cin >> n) {
		char *data = new char[n + 1];
		cin >> data;
		int *stack = new int[n / 2], idx = 0;
		for (i = 0; i < n; ++i) {
			if (data[i] == '1') {
				stack[idx++] = i;
			}
			else {
				cout << stack[idx-- - 1] + 1 << " ";
			}
		}
		cout << endl;
		delete[] stack;
		delete[] data;
	}
	return 0;
}

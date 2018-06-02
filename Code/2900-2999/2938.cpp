#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a[3], i;
	for (i = 0; i < 3; ++i) {
		cin >> a[i];
	}
	sort(a, a + 3);
	for (i = 2; i >= 0; --i) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}

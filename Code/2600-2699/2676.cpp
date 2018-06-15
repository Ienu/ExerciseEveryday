#include <iostream>
using namespace std;
int main() {
	int k, i, temp;
	cin >> k;
	int count[10] = { 0 };
	for(i = 0; i < k; ++i) {
		cin >> temp;
		count[temp - 1]++;
	}
	cout << count[0] << endl
		<< count[4] << endl
		<< count[9] << endl;
	return 0;
}

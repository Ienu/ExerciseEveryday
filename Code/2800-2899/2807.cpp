#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> data;
	int num, i, sum = 0, a[100] = { 0 };
	while (cin >> num && num != 0) {
		data.push_back(num);
		a[num] = 1;
	}
	for (i = 0; i < data.size(); ++i) {
		if (data[i] < 50 && a[data[i] * 2] == 1) {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}

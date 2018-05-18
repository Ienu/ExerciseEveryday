#include <iostream>
using namespace std;
int main() {
	int a, b, i, sum = 0;
	cin >> a;
	for (i = 1; i < 6; ++i)	{
		cin >> b;
		if (b < a) {
			sum += b;
		}
	}
	cout << sum << endl;
	return 0;
}

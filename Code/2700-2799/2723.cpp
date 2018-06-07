#include <iostream>
using namespace std;
int main() {
	int w, i, month[] = 
	{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	cin >> w;
	for (i = 0; i < 12; ++i) {
		if ((month[i] + 13 + w - 1) % 7 == 5) {
			cout << i + 1 << endl;
		}
	}
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int w, i, month[12] =
	{ 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 };
	while (cin >> w) {
		bool bh = false;
		for (i = 0; i < 12; ++i) {
			if ((w + month[i] + 12) % 7 == 5) {
				bh = true;
				cout << i + 1 << " ";
			}
		}
		if (!bh) {
			cout << "NULL";
		}
		cout << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	bool r = false;
	if((a % 4) == 0) {
		if((a % 100) != 0) {
			r = true;
		}
		else {
			if((a % 400) == 0 && (a % 3200) != 0) {
				r = true;
			}
		}
	}
	cout << (r ? "Y" : "N") << endl;
	return 0;
}

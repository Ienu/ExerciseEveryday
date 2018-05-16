#include <iostream>
using namespace std;
int main() {
	int day;
	cin >> day;
	if (day % 2 == 0 || day == 7) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}

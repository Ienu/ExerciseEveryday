#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if(a % 2 != 0) {
		a = 0;
	}
	cout << a / 4 + a % 4 / 2 << " " << a / 2 << endl;
	return 0;
}

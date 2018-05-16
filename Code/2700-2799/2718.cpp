#include <iostream>
using namespace std;
int main() {
	int day;
	cin >> day;
	cout << ((day % 2 == 0 || day == 7) ? "YES" : "NO") << endl;
	return 0;
}

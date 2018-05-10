#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double h, r;
	cin >> h >> r;
	cout << ceil(20000.0 / 3.14159 / r / r / h) << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int i, j1, j2, j3;
	for(i = 100; i < 1000; ++i) {
		j1 = i / 100;
		j2 = i / 10 % 10;
		j3 = i % 10;
		if(i == j1 * j1 * j1 + j2 * j2 * j2 + j3 * j3 * j3) {
			cout << i << endl;
		}
	}
	return 0;
}

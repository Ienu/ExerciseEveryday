#include <iostream>
using namespace std;
int main() {
	int n, i, a1, a3;
	cin >> n;
	for(i = n * 3 / 5 * 5; i >= 0; i -= 5) {
		if(n * 3 - i >= 3) {
			cout << i << endl;
			return 0;
		}
		else {
			for(a1 = n; a1 >= n - 2; --a1) {
				if((i - a1) % 3 == 0) {
					for(a3 = n; a3 >= n - 2; --a3) {
						if((i - a3) % 2 == 0 && i - a1 - a3 <= n) {
							cout << i << endl;
							return 0;
						}
					}
				}
			}
		}
	}
	return 0;
}

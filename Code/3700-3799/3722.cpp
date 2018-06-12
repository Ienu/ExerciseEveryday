#include <iostream>
using namespace std;
int main() {
	int N, M, i;
	cin >> N >> M;
	bool bF = false;
	for (i = 1; i <= M / 2; ++i) {
		if (N % i == 0 && N % (M - i) == 0) {
			cout << i << endl;
			bF = true;
			break;
		}
	}
	if (!bF) {
		cout << -1 << endl;
	}
	return 0;
}

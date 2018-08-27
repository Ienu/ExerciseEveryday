#include <iostream>
#include <vector>
using namespace std;
int main() {
	int S, i, j;
	cin >> S;
	vector<int> vs;
	vs.push_back(2);
	for (i = 3; i <= S - 2; i += 2) {
		bool bs = true;
		for (j = 0; vs[j] * vs[j] <= i; ++j) {
			if (i % vs[j] == 0) {
				bs = false;
				break;
			}
		}
		if (bs) {
			vs.push_back(i);
		}
	}
	i = 0;
	while (vs[i++] <= S / 2);
	int sIdx = i - 2;
	for (i = sIdx; i >= 0; --i) {
		int os = S - vs[i];
		for (j = sIdx; j < vs.size(); ++j) {
			if (os == vs[j]) {
				cout << os * vs[i] << endl;
				return 0;
			}
		}
	}
	return 0;
}

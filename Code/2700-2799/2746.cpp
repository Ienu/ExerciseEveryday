#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m, i;
	while(true) { 
		cin >> n >> m;
		if (n == 0 && m == 0) {
			break;
		}
		vector<int> vMonkey;
		for (i = 0; i < n; ++i) {
			vMonkey.push_back(i + 1);
		}
		int idx = 0;
		while (vMonkey.size() > 1) {
			n = vMonkey.size();
			idx = (idx + m) % n - 1;
			if (idx < 0) {
				idx = n - 1;
			}
			vMonkey.erase(vMonkey.begin() + idx);
		}
		cout << vMonkey[0] << endl;
	}
	return 0;
}

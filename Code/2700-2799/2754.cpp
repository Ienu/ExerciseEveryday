#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
vector<string> vs;
bool isOK(vector<int> vp, int x) {
	int i, s = vp.size();
	for (i = 0; i < s; ++i) {
		if (vp[i] == x || abs(i - s) == abs(vp[i] - x)) {
			return false;
		}
	}
	return true;
}
void queen(vector<int> vp) {
	int i;
	if (vp.size() == 8) {
		string str(8, '1');
		for (i = 0; i < 8; ++i) {
			str[i] += vp[i];
		}
		vs.push_back(str);
	}
	else {
		for (i = 0; i < 8; ++i) {
			if (isOK(vp, i)) {
				vector<int> v = vp;
				v.push_back(i);
				queen(v);
			}
		}
	}
}
int main() {
	int n, i, m;
	cin >> n;
	vector<int> v;
	queen(v);
	for (i = 0; i < n; ++i) {
		cin >> m;
		cout << vs[m - 1] << endl;
	}
	return 0;
}

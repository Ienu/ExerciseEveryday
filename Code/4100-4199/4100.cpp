#include <iostream>
#include <vector>
using namespace std;
struct proc {
	int s;
	int d;
};
int main() {
	int k, i, n, j, s;
	cin >> k;
	for (i = 0; i < k; ++i) {
		cin >> n;
		int data[101] = { 0 }, amount = 0;
		vector<proc> vp;
		for (j = 0; j < n; ++j) {
			proc pr;
			cin >> pr.s >> pr.d;
			vp.push_back(pr);
			for (s = pr.s; s <= pr.d; ++s) {
				data[s]++;
			}
		}
		while (vp.size() > 0) {
			int mp = 0, mIdx = 0;
			for (j = 0; j < 101; ++j) {
				if (mp < data[j]) {
					mp = data[j];
					mIdx = j;
				}
			}
			amount++;
			for (j = 0; j < vp.size(); ++j) {
				if (vp[j].s <= mIdx && vp[j].d >= mIdx) {
					for (s = vp[j].s; s <= vp[j].d; ++s) {
						data[s]--;
					}
					vp.erase(vp.begin() + j--);
				}
			}
		}
		cout << amount << endl;
	}
	return 0;
}

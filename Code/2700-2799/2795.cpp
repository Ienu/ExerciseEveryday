#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
struct modal {
	int n;
	int v;
};
bool compare(modal m1, modal m2) {
	return double(m1.v) / double(m1.n) > double(m2.v) / double(m2.n);
}
int main() {
	int k, i, j, w, s;
	cin >> k;
	for (i = 0; i < k; ++i) {
		cin >> w >> s;
		vector<modal> vm;
		for (j = 0; j < s; ++j) {
			modal mm;
			cin >> mm.n >> mm.v;
			vm.push_back(mm);
		}
		sort(vm.begin(), vm.end(), compare);
		double sum = 0;
		for (j = 0; j < vm.size(); ++j) {
			if (w >= vm[j].n) {
				w -= vm[j].n;
				sum += vm[j].v;
			}
			else {
				sum += double(w) * double(vm[j].v) / double(vm[j].n);
				break;
			}
		}
		cout << setprecision(2) << fixed << sum << endl;
	}
	return 0;
}

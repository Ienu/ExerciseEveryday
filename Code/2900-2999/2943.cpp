#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct mouse {
	int w;
	char c[11];
};
bool compare(mouse m1, mouse m2) {
	return m1.w > m2.w;
}
int main() {
	int n, i;
	cin >> n;
	vector<mouse> vm;
	for (i = 0; i < n; ++i) {
		mouse m;
		cin >> m.w >> m.c;
		vm.push_back(m);
	}
	sort(vm.begin(), vm.end(), compare);
	for (i = 0; i < n; ++i) {
		cout << vm[i].c << endl;
	}
	return 0;
}

#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector
using namespace std;
int main() {
	int m, i, j, n, num;
	cin >> m;
	for (i = 0; i < m; ++i) {
		cin >> n;
		queue<int> qi;
		stack<int> si;
		bool bq = true, bs = true;
		for (j = 0; j < n; ++j) {
			string str;
			cin >> str;
			if (str == "push") {
				cin >> num;
				qi.push(num);
				si.push(num);
			}
			else {
				if (bq && qi.size() > 0) {
					qi.pop();
				}
				else {
					bq = false;
				}
				if (bs && si.size() > 0) {
					si.pop();
				}
				else {
					bs = false;
				}

			}
		}
		if (bq) {
			while (qi.size() > 0) {
				cout << qi.front() << " ";
				qi.pop();
			}
			cout << endl;
		}
		else {
			cout << "error" << endl;
		}
		if (bs) {
			vector<int> vi;
			while (si.size() > 0) {
				vi.push_back(si.top());
				si.pop();
			}
			for (j = vi.size() - 1; j >= 0; --j) {
				cout << vi[j] << " ";
			}
			cout << endl;
		}
		else {
			cout << "error" << endl;
		}
	}
	return 0;
}

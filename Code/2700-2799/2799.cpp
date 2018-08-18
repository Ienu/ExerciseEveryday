#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct number {
	string str;
	int pos;
};
int main() {
	int n, i, mPos = 0;
	string str;
	cin >> n;
	vector<number> vnum;
	for (i = 0; i < n; ++i) {
		number num;
		cin >> num.str;
		int pos = num.str.find('.');
		if (pos > mPos)	{
			mPos = pos;
		}
		num.pos = pos;
		vnum.push_back(num);
	}
	for (i = 0; i < n; ++i) {
		cout << string(mPos - vnum[i].pos, ' ') << vnum[i].str << endl;
	}
	return 0;
}

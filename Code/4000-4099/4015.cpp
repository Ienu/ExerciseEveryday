#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string str;
	while (cin >> str) {
		vector<int> dot;
		int pAT = -1, nAT = 0, i, j;
		for (i = 0; i < str.length(); ++i) {
			if (str[i] == '@') {
				nAT++;
				pAT = i;
			}
			else if (str[i] == '.') {
				dot.push_back(i);
			}
		}
		bool is = false;
		if (nAT == 1 && str.front() != '@' 
			&& str.front() != '.'
			&& str.back() != '@' 
			&& str.back() != '.') 
		{
			for (j = 0; j < dot.size(); ++j) {
				if (dot[j] - pAT == 1 || dot[j] - pAT == -1) {
					is = false;
					break;
				}
				if (dot[j] - pAT > 1) {
					is = true;
				}
			}
		}
		cout << (is ? "YES" : "NO") << endl;
	}
	return 0;
}

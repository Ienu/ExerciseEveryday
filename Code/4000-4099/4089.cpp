#include <iostream>
#include <string>
#include <vector>
using namespace std;
class trie {
public:
	char c;
	bool bleaf;
public:
	trie(char c, bool b) {
		this->c = c;
		this->bleaf = b;
	}
	vector<trie> vt;
	int find(char c) {
		for (int i = 0; i < vt.size(); ++i) {
			if (vt[i].c == c) {
				return i;
			}
		}
		return -1;
	}
	bool insert(string str) {
		if (str.size() == 0) {
			return true;
		}
		if (this->bleaf) {
			return false;
		}
		else {
			int p = find(str[0]);
			if (p == -1) {
				if (str.size() > 1) {
					trie t(str[0], false);
					vt.push_back(t);
					return vt.back().insert(str.substr(1));
				}
				else if(str.size() == 1){
					trie t(str[0], true);
					vt.push_back(t);
					return true;
				}
				else {
					return true;
				}
			}
			else {
				if (str.size() > 1) {
					return vt[p].insert(str.substr(1));
				}
				else if(str.size() == 1){
					return false;
				}
				else {
					return true;
				}
			}			
		}
	}
};
int main() {
	int t, i;
	cin >> t;
	for (i = 0; i < t; ++i) {
		int n, j;
		trie tree('$', false);
		cin >> n;
		bool b = true;
		for (j = 0; j < n; ++j) {
			string str;
			cin >> str;
			if (b) {
				b = tree.insert("$" + str);
			}
		}
		cout << (b ? "YES" : "NO") << endl;
	}
	return 0;
}

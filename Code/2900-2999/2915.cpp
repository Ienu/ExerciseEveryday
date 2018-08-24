#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool compare(string s1, string s2) {
	return s1.length() < s2.length();
}
int main() {
	int n, i;
	while (cin >> n) {
		cin.ignore();
		vector<string> vs;
		char cstr[101];
		for (i = 0; i < n; ++i) {
			cin.getline(cstr, 101);
			string str(cstr);
			if (str == "stop") {
				break;
			}
			vs.push_back(str);
		}
		sort(vs.begin(), vs.end(), compare);
		for (i = 0; i < vs.size(); ++i) {
			cout << vs[i] << endl;
		}
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, t;
	while (cin >> s >> t) {
		int i = 0, j = 0;
		while (i < s.length() && j < t.length()) {
			if (s[i] == t[j]) {
				i++;
			}
			j++;
		}
		cout << (i == s.length() ? "Yes" : "No") << endl;
	}
	return 0;
}

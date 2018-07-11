#include <iostream>
using namespace std;
int main() {
	char s[30], d[60], idx, didx;
	while (cin.getline(s, 30)) {
		idx = 0, didx = 0;
		while (s[idx] != '\0') {
			if (s[idx] == '\t' || s[idx] == ' ') {
				d[didx++] = '\\';
				d[didx++] = 't';
				idx++;
			}
			else {
				d[didx++] = s[idx++];
			}
		}
		d[didx] = '\0';
		cout << s << endl << d << endl;
	}
	return 0;
}

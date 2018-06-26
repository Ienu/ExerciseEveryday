#include <iostream>
#include <string>
using namespace std;
int main() {
	string str, substr;
	while (cin >> str >> substr) {
		int i, pos = 0;
		char mc = 0;
		for (i = 0; i < str.length(); ++i) {
			if (str[i] > mc) {
				mc = str[i];
				pos = i;
			}
		}
		str.insert(pos + 1, substr);
		cout << str << endl;
	}
	return 0;
}

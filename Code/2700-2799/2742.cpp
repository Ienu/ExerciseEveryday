#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	int n, i, j, ch[26], max, maxc;
	string str;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> str;
		memset(ch, 0, sizeof(int) * 26);
		for (j = 0; j < str.length(); ++j) {
			ch[str[j] - 'a']++;
		}
		max = -1;
		for (j = 0; j < 26; ++j) {
			if (max < ch[j]) {
				max = ch[j];
				maxc = j;
			}
		}
		cout << char('a' + maxc) << " " << max << endl;
	}
	return 0;
}

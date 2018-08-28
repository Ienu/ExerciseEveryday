#include <iostream>
#include <string>
using namespace std;
int main() {
	string str1, str2;
	cin >> str1 >> str2;
	int len1 = str1.length(), len2 = str2.length(), i;
	string res(len1, '0');
	if(len1 > len2) {
		string head(len1 - len2, '0');
		str2 = head + str2;
	}
	for(i = 0; i < len1; ++i) {
		int v = str1[len1 - 1 - i] - str2[len1 - 1 - i];
		if(v < 0) {
			v += 10;
			str1[len1 - i - 2]--;
		}
		res[len1 - 1 - i] = v + '0';
	}
	for(i = 0; i < len1 - 1; ++i) {
		if(res[i] != '0') {
			break;
		}
	}
	cout << res.substr(i, len1 - i) << endl;
	return 0;
}

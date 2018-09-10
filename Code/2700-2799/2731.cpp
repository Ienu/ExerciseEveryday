#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
string mul(string str1, int s) {
	string strR(str1.length(), '0');
	int i, up = 0;
	for (i = 0; i < str1.length(); ++i) {
		int v = up + (str1[i] - '0') * s;
		up = v / 10;
		strR[i] = v % 10 + '0';
	}
	if (up != 0) {
		char head[6];
		sprintf(head, "%d", up);
		string strH(head);
		reverse(strH.begin(), strH.end());
		return strR + strH;
	}
	return strR;
}
int main() {
	int n, i;
	cin >> n;
	string str = "1";
	for (i = 2; i <= n; ++i) {
		str = mul(str, i);
	}
	reverse(str.begin(), str.end());
	cout << str << endl;
	return 0;
}

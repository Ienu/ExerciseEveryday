#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
string multiply(string str, int s) {
	reverse(str.begin(), str.end());
	int i, n = str.length(), up = 0;
	string tail(n, '0');
	for(i = 0; i < n; ++i) {
		int v = (str[i] - '0') * s + up;
		tail[i] = v % 10 + '0';
		up = v / 10;
	}
	char head[6] = "";
	sprintf(head, "%d", up);
	reverse(tail.begin(), tail.end());
	return string(head) + tail;
}
int main() {
	int R, Y, i;
	string M;
	cin >> R >> M >> Y;
	R += 100;
	for(i = 0; i < Y; ++i) {
		M = multiply(M, R);
	}
	cout << M.substr(0, M.length() - 2 * Y) << endl;
	return 0;
}

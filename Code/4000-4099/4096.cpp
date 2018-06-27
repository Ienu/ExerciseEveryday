#include <iostream>
using namespace std;
int main() {
	char cstr[501];
	cin >> cstr;
	int idx = 0;
	while (cstr[idx] != '\0') {
		switch (cstr[idx++]) {
		case 'A':
			cout << "1";
			break;
		case 'B':
			cout << "2";
			break;
		case 'C':
			cout << "$";
			break;
		case 'D':
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}

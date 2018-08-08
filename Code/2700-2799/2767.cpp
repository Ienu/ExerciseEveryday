#include <iostream>
using namespace std;
int main() {
	char cstr[201];
	cin.getline(cstr, 201);
	int i;
	for (i = 0; i < 201; ++i) {
		if (cstr[i] == '\0') {
			break;
		}
		if (cstr[i] >= 'A' && cstr[i] <= 'E') {
			cstr[i] += 'V' - 'A';
		}
		else if (cstr[i] >= 'F' && cstr[i] <= 'Z') {
			cstr[i] -= 'F' - 'A';
		}
	}
	cout << cstr << endl;
	return 0;
}

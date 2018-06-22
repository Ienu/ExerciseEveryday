#include <iostream>
using namespace std;
void insert0(char* cstr) {
	int i;
	for (i = 19; i >= 0; --i) {
		cstr[i * 2] = cstr[i];
	}
	for (i = 1; i < 40; i += 2) {
		cstr[i] = ' ';
	}
}
int main() {
	char strin[40];
	while (cin.getline(strin, 40, '\n')) {
		insert0(strin);
		cout << strin << endl;
	}
	return 0;
}

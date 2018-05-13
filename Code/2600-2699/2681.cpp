#include <iostream>
using namespace std;
int main() {
	char cstr[101], *p = cstr;
	cin.getline(cstr, 101);
	while (*p++ != '\0');
	cout << p - cstr - 1 << endl;
	return 0;
}

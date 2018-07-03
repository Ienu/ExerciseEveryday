#include <iostream>
using namespace std;
int main() {
	int code[7] = { 4, 9, 6, 2, 8, 7, 3 };
	char cstr[100], res[100];
	cin.getline(cstr, 100);
	int idx = 0;
	while (cstr[idx] != '\0') {
		res[idx] = cstr[idx] + code[idx % 7];
		if (res[idx] > 'z') {
			res[idx] -= 'z' - ' ';
		}
		idx++;
	}
	res[idx] = '\0';
	cout << res << endl << cstr << endl;
	return 0;
}

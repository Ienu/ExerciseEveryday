#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[81];
	int i, a[5] = {0, 0, 0, 0, 0};
	cin.getline(str, 81);
	for(i = 0; i < strlen(str); ++i) {
		switch(str[i]) {
		case 'a':
			a[0]++;
			break;
		case 'e':
			a[1]++;
			break;
		case 'i':
			a[2]++;
			break;
		case 'o':
			a[3]++;
			break;
		case 'u':
			a[4]++;
		}
	}
	cout << a[0] << " "
		<< a[1] << " "
		<< a[2] << " "
		<< a[3] << " "
		<< a[4] << endl;
	return 0;
}

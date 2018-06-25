#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[81];
	int i;
	cin.getline(str, 81);
	for(i = 0; i < strlen(str); ++i) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	cout << str << endl;
	return 0;
}

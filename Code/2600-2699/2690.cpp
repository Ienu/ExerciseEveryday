#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[81];
	cin.getline(str, 81);
	int i;
	if(str[0] >= 'a' && str[0] <= 'z') {
		str[0] -= 32;
	}
	for(i = 1; i < strlen(str); ++i) {
		if(str[i] >= 'a' && str[i] <= 'z' 
			&& (str[i - 1] == ' ' || str[i - 1] == '\t' 
			|| str[i - 1] == '\r' || str[i - 1] == '\n')) {
			str[i] -= 32;
			i++;
		}
	}
	cout << str << endl;
	return 0;
}

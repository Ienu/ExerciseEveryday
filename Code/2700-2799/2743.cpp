#include <iostream>
using namespace std;
int main() {
	char c1[1000], c2[1000];
	cin.getline(c1, 1000);
	cin.getline(c2, 1000);
	int i = 0, j = 0;
	while(true) {
		if (c1[i] == ' ') {
			i++;
			continue;
		}
		if (c2[j] == ' ') {
			j++;
			continue;
		}
		if (c1[i] >= 'A' && c1[i] <= 'Z') {
			c1[i] += 'a' - 'A';
		}
		if (c2[j] >= 'A' && c2[j] <= 'Z') {
			c2[j] += 'a' - 'A';
		}
		if (c1[i] != c2[j]) {
			cout << "NO" << endl;
			break;
		}
		if (c1[i] == '\0' && c2[j] == '\0') {
			cout << "YES" << endl;
			break;
		}
		i++;
		j++;
	}
	return 0;
}

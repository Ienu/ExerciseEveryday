#include <iostream>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	cin.ignore();
	for (i = 0; i < n; ++i) {
		char src[81] = "";
		cin.getline(src, 81);
		int idx = 0;
		while (src[idx] != '\0') {
			if (src[idx] == 'z' || src[idx] == 'Z') {
				src[idx] -= 25;
			}
			else if((src[idx] >= 'a' && src[idx] < 'z')
				|| (src[idx] >= 'A' && src[idx] < 'Z')) {
				src[idx]++;
			}
			idx++;
		}
		cout << src << endl;
	}
	return 0;
}

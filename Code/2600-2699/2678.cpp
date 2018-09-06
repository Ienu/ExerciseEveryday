#include <iostream>
#include <string>
using namespace std;
int main() {
	int N, i, j, k;
	cin >> N;
	for(i = 0; i < N; ++i) {
		string s1, s2;
		cin >> s1 >> s2;
		int max = 0;
		for(j = 0; j < s1.length() - max; ++j) {
			for(k = 0; k < s2.length() - max; ++k) {
				if(s1[j] == s2[k]) {
					int index = 1;
					while(j + index < s1.length()
						&& k + index < s2.length()) {
						if(s1[j + index] == s2[k + index]) {
							index++;
						}
						else {
							break;
						}
					}
					if(max < index) {
						max = index;
					}
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}

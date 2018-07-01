#include <iostream>
using namespace std;
int main() {
	int N, i, ch;
	cin >> N;
	bool chem[9] = { 0 };
	for (i = 0; i < N; ++i) {
		cin >> ch;
		chem[ch] = 1;
	}
	if ((chem[1] && chem[2]) 
		|| (chem[3] && chem[4])
		|| (chem[5] ^ chem[6])
		|| !(chem[7] || chem[8])) {
		cout << "0" << endl;
	}
	else {
		cout << "1" << endl;
	}
	return 0;
}

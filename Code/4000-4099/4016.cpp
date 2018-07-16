#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, i, j, score;
	cin >> n;
	string name[500], num;
	int data[101][500] = { 0 };
	for (i = 0; i < n; ++i) {
		cin >> name[i] >> score;
		data[score][0]++;
		data[score][data[score][0]] = i;
	}
	for (i = 100; i > 0; --i) {
		for (j = 0; j < data[i][0]; ++j) {
			cout << name[data[i][j + 1]] << endl;
		}
	}
	return 0;
}

#include <iostream>
using namespace std;
int **data;
int **lgst;
int r;
int c;
int maxSlide(int i, int j) {
	int maxlen = 0;
	if(i - 1 >= 0 && data[i - 1][j] < data[i][j]) {
		if(lgst[i - 1][j] == -1) {
			lgst[i - 1][j] = maxSlide(i - 1, j);
		}
		if(maxlen < lgst[i - 1][j]) {
			maxlen = lgst[i - 1][j];
		}
	}
	if(i + 1 < r && data[i + 1][j] < data[i][j]) {
		if(lgst[i + 1][j] == -1) {
			lgst[i + 1][j] = maxSlide(i + 1, j);
 		}
		if(maxlen < lgst[i + 1][j]) {
			maxlen = lgst[i + 1][j];
		}
	}
	if(j - 1 >= 0 && data[i][j - 1] < data[i][j]) {
		if(lgst[i][j - 1] == -1) {
			lgst[i][j - 1] = maxSlide(i, j - 1);
		}
		if(maxlen < lgst[i][j - 1]) {
			maxlen = lgst[i][j - 1];
		}
	}
	if(j + 1 < c && data[i][j + 1] < data[i][j]) {
		if(lgst[i][j + 1] == -1) {
			lgst[i][j + 1] = maxSlide(i, j + 1);
		}
		if(maxlen < lgst[i][j + 1]) {
			maxlen = lgst[i][j + 1];
		}
	}
	return maxlen + 1;
}
int main() {
	cin >> r >> c;
	int i, j;
	data = new int*[r];
	lgst = new int*[r];
	for(i = 0; i < r; ++i) {
		data[i] = new int[c];
		lgst[i] = new int[c];
		for(j = 0; j < c; ++j) {
			cin >> data[i][j];
			lgst[i][j] = -1;
		}
	}
	int maxS = -1;
	for(i = 0; i < r; ++i) {
		for(j = 0; j < c; ++j) {
			if(lgst[i][j] == -1) {
				lgst[i][j] = maxSlide(i, j);
			}
			if(lgst[i][j] > maxS) {
				maxS = lgst[i][j];
			}
		}
	}
	cout << maxS << endl;
	return 0;
}

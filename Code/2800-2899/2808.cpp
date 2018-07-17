#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int L, M, i, j, sum = 0;
	cin >> L >> M;
	int *tree = new int[L + 1];
	memset(tree, 0, sizeof(int) * (L + 1));
	for (i = 0; i < M; ++i) {
		int s, e;
		cin >> s >> e;
		for (j = s; j <= e; ++j) {
			tree[j] = 1;
		}
	}
	for (i = 0; i < L + 1; ++i) {
		if (tree[i] == 0) {
			sum++;
		}
	}
	cout << sum << endl;
	delete[] tree;
	return 0;
}

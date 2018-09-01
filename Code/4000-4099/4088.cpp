#include <cstdio>
using namespace std;
int main() {
	int *A, *B, n, m, i, j;
	scanf("%d", &n);
	A = new int[n];
	for (i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &m);
	B = new int[m];
	for (i = 0; i < m; ++i) {
		scanf("%d", &B[i]);
	}
	i = 0, j = 0;
	while (i < n && j < m) {
		if (A[i] < B[j]) {
			printf("%d ", A[i++]);
		}
		else if (B[j] < A[i]) {
			printf("%d ", B[j++]);
		}
		else {
			i++;
			j++;
		}
	}
	for (; i < n; ++i) {
		printf("%d ", A[i]);
	}
	for (; j < m; ++j) {
		printf("%d ", B[j]);
	}
	printf("\n");
	delete[] A;
	delete[] B;
	return 0;
}

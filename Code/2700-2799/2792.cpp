#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, i, j, k, a, b, s, num;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> s;
		cin >> a;
		vector<int> A, B;
		for (j = 0; j < a; ++j) {
			cin >> num;
			if (num < s) {
				A.push_back(num);
			}
		}
		cin >> b;
		for (j = 0; j < b; ++j) {
			cin >> num;
			if (num < s) {
				B.push_back(num);
			}
		}
		int sum = 0;
		for (j = 0; j < A.size(); ++j) {
			for (k = 0; k < B.size(); ++k) {
				if (A[j] + B[k] == s) {
					sum++;
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}

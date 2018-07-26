#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	float* data = new float[n];
	for(i = 0; i < n; ++i) {
		cin >> data[i];
	}
	float maxq = -1e10;
	float m1, m2;
	for(i = 0; i < n - 1; ++i) {
		float q = data[i] / data[i + 1];
		if(q > maxq) {
			maxq = q;
			m1 = data[i];
			m2 = data[i + 1];
		}
	}
	cout << setprecision(6) << fixed << m1 << " / " << m2 << " = " << maxq << endl;
	delete[] data;
	return 0;
}

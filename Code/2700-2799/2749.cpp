#include <iostream>
using namespace std;
int factor(int number, int s) {
	int i, sum = 1;
	for (i = s; i * i <= number; ++i)	{
		if (number % i == 0 && i <= number / i) {
			sum += factor(number / i, i);
		}
	}
	return sum;
}
int main() {
	int n, i, num;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> num;
		cout << factor(num, 2) << endl;
	}
	return 0;
}

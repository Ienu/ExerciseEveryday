#include <iostream>
using namespace std;
int main() {
	int k, i;
	cin >> k;
	for (i = 0; i < k; ++i)	{
		cout << (1ll << (1 << i)) + 1 << endl;
	}
	return 0;
}

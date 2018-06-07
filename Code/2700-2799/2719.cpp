#include <iostream>
using namespace std;
int main() {
	int height[10], i, tall, sum = 0;
	for(i = 0; i < 10; ++i) {
		cin >> height[i];
	}
	cin >> tall;
	for(i = 0; i < 10; ++i) {
		if(tall + 30 >= height[i]) {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}

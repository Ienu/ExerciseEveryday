#include <iostream>
#include <vector>
using namespace std;
int main() {
	int i, j;
	for(i = 1; i <= 1000; ++i) {
		int sum = 0;
		vector<int> factor;
		for(j = 1; j <= i / 2; ++j) {
			if(i % j == 0) {
				factor.push_back(j);
				sum += j;
			}
		}
		if(sum == i) {
			cout << i << " its factors are ";
			for(j = 0; j < factor.size(); ++j) {
				cout << factor[j];
				if(j < factor.size() - 1) {
					cout << ",";
				}
			}
			cout << endl;
		}
	}
	return 0;
}

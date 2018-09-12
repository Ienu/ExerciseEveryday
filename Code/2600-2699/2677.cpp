#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N, i, area = 0, perimeter = 0;
	cin >> N;
	int* data = new int[N * N];
	vector<int> index;
	for(i = 0; i < N * N; ++i) {
		cin >> data[i];
		if(data[i] <= 50) {
			area++;
			if(i % N == 0
				|| (i + 1) % N == 0
				|| i < N
				|| i >= N * N - N) {
				perimeter++;
			}
			else if(data[i - 1] > 50
				|| data[i - N] > 50) {
				perimeter++;
			}
			else {
				index.push_back(i);
			}
		}
	}
	for(i = 0; i < index.size(); ++i) {
		if(data[index[i] + 1] > 50
			|| data[index[i] + N] > 50) {
			perimeter++;
		}
	}
	cout << area << " " << perimeter << endl;
	delete[] data; 
	return 0;
}

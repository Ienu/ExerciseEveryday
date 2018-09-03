#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct point {
	double x;
	double y;
};
int main() {
	int n, i, j;
	cin >> n;
	point* data = new point[n];
	for(i = 0; i < n; ++i) {
		cin >> data[i].x >> data[i].y;
	}
	double maxDis = -1, dis;
	for(i = 0; i < n; ++i) {
		for(j = i + 1; j < n; ++j) {
			dis = (data[i].x - data[j].x) * (data[i].x - data[j].x)
				+ (data[i].y - data[j].y) * (data[i].y - data[j].y);
			if(dis > maxDis) {
				maxDis = dis;
			}
		}
	}
	cout << setprecision(4) << fixed << sqrt(maxDis) << endl;
	delete[] data;
	return 0;
}

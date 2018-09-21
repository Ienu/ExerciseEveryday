#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	string str;
	vector<string> dic;
	while (cin >> str && str != "#") {
		dic.push_back(str);
	}
	int i, j;
	while (cin >> str && str != "#") {
		vector<string> sword;
		bool bc = false;
		for (i = 0; i < dic.size(); ++i) {
			if (str.length() == dic[i].length()) {
				if (str == dic[i]) {
					bc = true;
					break;
				}
				else {
					int sumDiff = 0;
					for (j = 0; j < str.length(); ++j) {
						if (str[j] != dic[i][j]) {
							sumDiff++;
						}
						if (sumDiff > 1) {
							break;
						}
					}
					if (sumDiff == 1) {
						sword.push_back(dic[i]);
					}
				}
			}
			else if (str.length() == dic[i].length() + 1) {
				for (j = 0; j < str.length(); ++j) {
					string scmp = str;
					scmp.erase(scmp.begin() + j);
					if (scmp == dic[i]) {
						sword.push_back(dic[i]);
						break;
					}
				}
			}
			else if (str.length() == dic[i].length() - 1) {
				for (j = 0; j < dic[i].length(); ++j) {
					string scmp = dic[i];
					scmp.erase(scmp.begin() + j);
					if (scmp == str) {
						sword.push_back(dic[i]);
						break;
					}
				}
			}
		}
		if (bc) {
			cout << str << " is correct" << endl;
		}
		else {
			cout << str << ":";
			for (i = 0; i < sword.size(); ++i) {
				cout << " " << sword[i];
			}
			cout << endl;
		}
	}
	return 0;
}

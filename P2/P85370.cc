#include <iostream>
using namespace std;
int main() {
	double c, i;
	int t;
	string type;
	cin >> c >> i >> t >> type;
	double result = c;
	for (int j = 0; j < t; j++) {
		if (type == "simple") {
			result += c * i / 100;
		} else { // Compost
			result += result * i / 100;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(4);
	cout << result << endl;
} 

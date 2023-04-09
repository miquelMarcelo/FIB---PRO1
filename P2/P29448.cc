#include <iostream>
#include <sstream>
using namespace std;
bool leap(int year) {
	bool leap = year % 4 == 0;
	if (year % 100 == 0) leap = false;
	if (year % 400 == 0) leap = true;
	return leap;
}
bool correct(int y, int m, int d) {
	if (d <= 0 || d>31 || m <= 0 || m>12 || y < 1800 || y > 9999) return false;
	int maxDays;
	switch(m) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		maxDays = 31;
		break;
		case 2:
		maxDays = leap(y) ? 29 : 28;
		break;
		default:
		maxDays = 30;
		break;
	}
	if (d > maxDays) return false;
	return true;
}
int main() {
	string s;
	int d,m,y;

	while (getline(cin, s)) {
		stringstream ss(s);
		ss >> d >> m >> y;
		cout << (correct(y,m,d) ? "Correct Date" : "Incorrect Date") << endl;
	}

}

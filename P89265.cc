#include <iostream>

using namespace std;

int main(){
    int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	int x = a1>a2?a1:a2;
	int y = b1<b2?b1:b2;
	if (a1 == a2 && b1 == b2) {
		cout << "=";
	} else if (a1 <= a2 && b1 >= b2) {
		cout << 2;
	} else if (a1 >= a2 && b1 <= b2) {
		cout << 1;
	} else {
		cout << "?";
	}
	cout << " , ";
	if (x > y) {
		cout << "[]" << endl;
	} else {
		cout << "[" << x << "," << y << "]" << endl;
	}
}

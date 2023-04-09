#include <iostream>

using namespace std;

int main(){
    int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	int x = a1>a2?a1:a2;
	int y = b1<b2?b1:b2;
	if (x > y) {
		cout << "[]" << endl;
	} else {
		cout << "[" << x << "," << y << "]" << endl;
	}
}

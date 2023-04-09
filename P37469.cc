#include <iostream>

using namespace std;

int main () {

    int T;
	
	cin >> T;
	
	int h = T / 3600, m = (T % 3600) /60, s = (T % 60);
	
	cout << h << " " << m << " " << s << endl;

}

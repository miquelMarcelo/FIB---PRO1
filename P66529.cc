#include <iostream>

using namespace std;

int main(){
    double i;
	double total = 100;
	string type;
	cin >> i >> type;

	int m;
	if (type == "setmanal")   m = 52;	
	else if (type == "mensual")    m = 12;	
	else if (type == "trimestral") m = 4;	
	else m = 2; // Semestral

	double ip = i / m; // interes parcial
	for (int q = 0; q < m; q++) {
		total += total * ip / 100;
	}

	total -= 100; 

	cout.setf(ios::fixed);
	cout.precision(4);

	cout << total << endl;
}

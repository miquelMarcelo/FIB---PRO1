#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    double h=0;
    for (double i=1;i<=n;i++) h+=(1/i);
    cout.setf(ios::fixed);
	cout.precision(4);
	cout << h << endl;
}

#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	cout << "nombres que acaben igual que " << a << ":" << endl;
	int t=0,b;
    while (cin >> b){
      if (b%1000 == a%1000){
                 t++;
                 cout << b << endl;
      }
    }
    cout << "total: " << t << endl;
}

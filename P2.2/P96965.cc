#include <iostream>
using namespace std;

int reduccio_digits(int n);

int main() {
  int n;
  while (cin >> n) {
    cout << reduccio_digits(n) << endl;
  }
}
int suma(int n){
    if(n<10) return n;
    else return n%10+suma(n/10);
}
int reduccio_digits(int n){
    if (n<10) return n;
    else return reduccio_digits(suma (n));
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << "El nombre de digits de " << n << " es ";
    int m=1;
    while (n>9){
      m++;
      n=n/10;
    } 
    cout << m << "." << endl;
}

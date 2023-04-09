#include <iostream>
using namespace std;
int suma_de_quadrados (int n) {
    if (n > 0) return n*n + suma_de_quadrados(n-1);
    else return 0;
}
int main() {
    int n;
    cin >> n;
    cout << suma_de_quadrados(n) << endl;
}

#include <iostream>
using namespace std;
bool es_capicua(int n) {
    int girat=0;
    int copia_n=n;
    while (copia_n!=0) {
        girat*=10;
        girat+=copia_n%10;
        copia_n/=10;
    }
    return girat==n;
}

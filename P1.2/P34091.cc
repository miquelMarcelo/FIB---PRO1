#include <iostream>

using namespace std;

bool es_perfecte(int n){
    int suma = 1;
    for(int i = 2; i*i <= n; ++i){
        if(n % i == 0) suma += i + n/i;
    }
    if(n != 0 and n != 1) return (suma == n);
    else return false;
}
 

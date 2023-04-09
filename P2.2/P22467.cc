#include <iostream>
using namespace std;


bool es_primer_perfecte(int n);


int main() {
    int n;
    while (cin >> n) cout << (es_primer_perfecte(n) ? "true" : "false") << endl;
}

bool primer(int x) {
    if (x < 2) return false;
    for (int i = 2; i*i <= x; i++) {
        if (x%i == 0) return false;
    }
    return true;
}

int suma(int n){
    if (n<10) return n;
    else return (suma(n/10) + n%10);

}

bool es_primer_perfecte(int n){
    if (not primer(n)) return false;
    else {
        if (n<10) return true;
        else{
            return es_primer_perfecte(suma(n));
        }
    }
}

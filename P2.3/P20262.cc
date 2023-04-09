#include <iostream>

using namespace std;

void max(int x);
int main(){
    int x;
    while (cin >> x) max(x);
}

void max(int x){
    int num,max=0,suma=0,suma2=0;
    while (x>0){
        cin >> num;
        suma=suma+num;
        suma2=suma2+num;
        if (suma > max) max=suma;
        if (suma2 < 0) suma2=0;
        x--;
    }
    cout << max << " " << suma2 << endl;
}

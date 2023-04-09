#include <iostream>
using namespace std;

void gira(int &n){
    string nom;
    if (cin >> nom){
        gira(n);
        if (n>0){
            cout << nom << endl;
            n--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    gira(n);
}

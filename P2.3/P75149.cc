#include<iostream>
using namespace std;

int main() {
       char c;
       bool trobat=false;
       cin >> c;
       while (not trobat and c != '.' ){
            trobat = c== 'a';
            cin >> c;
       }
       if (trobat) cout << "si"<< endl;
       else cout << "no" <<endl;
}

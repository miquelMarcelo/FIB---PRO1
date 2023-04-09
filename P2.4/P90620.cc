#include <iostream>

using namespace std;

int main(){
    int x,y=0,z=0;
    bool trobat=false;
    while (cin >> x and x !=0 ){
          if (y > 3143 and z < y and x < y) trobat=true;
          if (z == 0) z=x;
          if (y == 0) y=x;
          else{
               z=y;
               y=x;
          }
    }
    if (trobat) cout << "SI" << endl;
    else cout << "NO" << endl;
}

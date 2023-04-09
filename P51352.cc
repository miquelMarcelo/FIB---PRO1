#include <iostream>

using namespace std;

int main () {

        char x,y;
    
    cin >> x >> y;
    
    if ( x == y )cout << "-";
    else {
    
        if ( x == 'A'){
             
             if ( y == 'P') cout << "1";
             else cout << "2";
        }
        if ( x == 'P'){
             
             if ( y == 'V') cout << "1";
             else cout << "2";
        }
        if ( x == 'V'){
             
             if ( y == 'A') cout << "1";
             else cout << "2";
        }
    }
    cout << endl;
}

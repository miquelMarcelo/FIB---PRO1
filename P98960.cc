#include <iostream>

using namespace std;

int main(){
    char l;
    cin >> l;
    if ( l >= 'a' and l <= 'z') l=l-32;
    else l=l+32;
    cout << l << endl;
}

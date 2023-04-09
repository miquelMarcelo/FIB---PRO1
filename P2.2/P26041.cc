#include <iostream>
using namespace std;

void gira(){
    string s;
    if(cin >> s){
        gira();
        cout << s << endl;
    }
}
int main(){
    gira();
}

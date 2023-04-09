#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;  
    if (a == 0) cout << a;
    else{
        char c='A';
        int b=0;
        while( a >= 1)
        {
            b= a % 16;
            if (b >= 10) {
                c= (b%10)+'A';
                cout << c;
            }
            else cout << b;
            a= a / 16;
        }
    }
    cout << endl;   
}

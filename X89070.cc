#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int m=x,n=x;
    if (y > x) m=y;
    else n=y;   
    if(z > m) m=z;
    else if(z < n)  n=z;
    cout << m+n << endl;
}

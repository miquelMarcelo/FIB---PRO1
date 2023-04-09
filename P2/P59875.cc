#include <iostream>

using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if (x > y){
        x = x - y;
        y= x+ y;
        x = y - x;    
   }
   for (int i=y;i>=x;i--) cout << i << endl;
}

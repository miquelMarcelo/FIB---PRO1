#include <iostream>
using namespace std;
int main (){
    int i;
    cin >> i;
    for (int m=0;m<i;m++){
      int x,y,cont=0;
      cin >> x;
      while(x!=0){
         cin >> y;
          if ( x<y ) cont++;
          x = y;
      }
      cout << cont << endl;
    }
}

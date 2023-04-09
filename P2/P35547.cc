#include <iostream>
using namespace std;
int main (){   
    int a; 
    while (cin >> a){
          int k=a/100, x= a%19, b= a%4, c= a%7, q= k/4, p= (13+8*k)/25, y= (15-p+k-q)%30, z= (19*x+y)%30, n= (4+k-q)%7, e= (2*b+4*c+6*z+n)%7, d=0, m=0;
          if( z+e <= 9){
              d=22+z+e;
              m=3;
          }else if (z == 29 and e == 6){
              d=19;
              m=4;
          }else if (z == 28 and e == 6 and x > 10){
              d=18;
              m=4;
          }else{
              d= z+e-9;
              m=4;
          }
          cout << d << "/" << m << endl;
    }

}

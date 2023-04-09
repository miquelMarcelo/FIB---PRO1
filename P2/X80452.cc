#include <iostream>
using namespace std;
int main (){   
    int n;
    while (cin >> n){
         int p=0,q=0;
         while (n > 0){
               if (n%7 == 0){
                       p=n/7;
                       n=n-(p*7);
               }else{
                     q++;
                     n=n-4;
               }
         } 
      cout << p << " " << q << endl; 
    }
}

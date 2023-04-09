#include <iostream>
using namespace std;
int main(){
   int n;
   while (cin >> n){
         while (n/10 > 1){
               int m=n;
               int acum=1;
                 while(m/10 > 1){
                    acum=acum*(m%10);
                    m=m/10;
                 }
                 cout << "El producte dels digits de "<< n << " es "<< acum << "." << endl;
         }
         cout << "----------"<< endl;
   }
} 

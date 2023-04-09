#include <iostream>
using namespace std;
int main(){
   int n,m;
   bool bloc=true;
   while (cin >> n >> m){
         int mod=(n+m)%5;
         if (not bloc) cout << endl;
         else bloc = false;
         for (int i=0;i<n;i++){
             for (int x=0;x<m;x++) cout << mod;
             cout << endl;
         }
   }
} 

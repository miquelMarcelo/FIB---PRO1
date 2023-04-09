#include <iostream>
using namespace std;
int main(){
    int n;
    while (cin >> n){
        int acum=0;
        while(n!=1){
          if (n%2==0)n=n/2;
          else n=n*3+1;
          acum++;
        }
        cout << acum << endl;
    }
} 

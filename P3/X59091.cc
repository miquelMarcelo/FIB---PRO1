#include <iostream>
using namespace std;
int main (){    
    int n,m;
    bool primer=true;
    while (cin >> n >> m){
          if (primer) primer=false;
          else cout << endl;
          int a=9;
          for (int i=0;i<n;i++){
              for (int x=0;x<m;x++){
                  cout << a;
                  a--;
                  if (a <0) a=9;
              }
              cout << endl;
          }
    }
}

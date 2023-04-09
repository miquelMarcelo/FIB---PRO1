#include <iostream>
using namespace std;
int main(){
    int a,b;
    while (cin >> a >> b){
          int acum=1;
          for (int i=0;i<b;i++)acum*=a;
          cout << acum << endl;
    }
}

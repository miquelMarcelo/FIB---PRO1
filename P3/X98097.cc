#include <iostream>
using namespace std;
int main (){    
    int n;    
    cin >> n;  
    int num=0,parell=0,senar=0,contador=1;   
    while (n > 0){        
          num=n%10;
          n=n/10;     
          if( contador%2 == 0) parell+=num;
          else senar+=num;
          contador++;
    }
    cout << senar << " " << parell << endl;
    
    if (parell == 0 or senar == 0) {
        cout << "0 = ";
        if (senar >= parell) {
           cout << parell << " * " << senar << endl;
        }
        if (parell >= senar) {
           cout << senar << " * " << parell << endl;
        }
  }
  else if (senar >= parell) {
        if ((senar % parell) == 0) {
           cout << senar << " = " << senar/parell << " * " << parell << endl;
        }
        else cout << "res" << endl;
  }
  else if (parell >= senar) {
        if ((parell % senar) == 0) {
           cout << parell << " = " << parell/senar << " * " << senar << endl;
        }
        else cout << "res" << endl;
  }
}

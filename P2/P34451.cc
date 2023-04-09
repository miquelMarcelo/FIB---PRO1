#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int t=0,x;
    while( cin >> x){
      if(x%n == 0) t++;
    }
    cout << t << endl;
}

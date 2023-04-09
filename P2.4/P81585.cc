#include <iostream>

using namespace std;

int main(){
    int x;
    while (cin >> x){
          int sum=0,max=0,n;
          for (int i=0;i<x;i++){
              cin >> n;
              if (max<n){
                 sum+=max;
                 max=n;
              }else sum+=n;
          }
        if (sum == max) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

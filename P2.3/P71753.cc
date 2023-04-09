#include <iostream>

using namespace std;

int main(){
    int x;
    while (cin >> x){
    int n=0,max=0;
     for (int i=1;i<=x;i++){
         cin >> n;
         if (i == 1)max=n;
         if (n>max) max=n;
     }
     cout << max << endl;
    }
}

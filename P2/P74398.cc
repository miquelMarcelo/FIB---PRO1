#include <iostream>
using namespace std;
int main(){
  
    int a,i,n;
    cin >> a;
    for(i=2;i <= 16; i++)
    {
        int b=a;
       for (n=0; b >= 1; n++)
       {
            b= b/i;
       }
        cout << "Base " << i << ": " << n << " cifras." << endl;
    }
}

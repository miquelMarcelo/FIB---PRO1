#include <iostream>
using namespace std;
int main(){
    int f,c;
    cin >> f >> c;
    int ctrl=0;
    int num1=0;
    int num2=1;
    for (int i=0;i<f;i++){
        num1=ctrl;
        for (int x=0;x<c;x++){
            if (i == x)cout << "0";
            else if (i > x){
                 cout << num1;
                 num1--;
                 if (num1 == -1)num1=9;
            }else{
                  cout << num2;
                  num2++;
                  if (num2 == 10) num2=0;
            }
        }
        cout << endl;
        num2=1;
        ++ctrl;
        if (ctrl ==10)ctrl=0;
    }
}

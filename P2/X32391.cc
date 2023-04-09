#include <iostream>
using namespace std;
int main (){   
    int d,n,t;
    cin >> d >> n >> t;
    int total=n,semana=0,a=0;
    for (int i=0;i<t;i++){
        cin >> a;
        total=total+a-d;
        if (total > 0) semana++;
    }
    cout << semana << endl;
}

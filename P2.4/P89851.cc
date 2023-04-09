#include <iostream>
using namespace std;

int suma(int n){
    if (n==1)return 1;
    else return suma(n-1)+n;
}
int main(){
    int n;
    while (cin >> n){
        int m=suma(n);
        int l=0,coun=0;
        for (int i=1;i<n;i++){
                cin >> l;
                coun+=l;
        }
        cout << m-coun << endl;
    }
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int x=n;x>i;x--)cout << "+";
        cout << "/";
        for (int m=1;m<i;m++)cout << "*";
        cout << endl;
    }
}

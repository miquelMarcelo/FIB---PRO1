#include <iostream>
using namespace std;
int main (){   
    char c;
    cin >> c;
    int total=0;
    while (c != '.'){
          if (c == 'a') total++;
          cin >> c;
    }
    cout << total << endl;
}

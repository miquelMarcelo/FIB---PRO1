#include <iostream>
using namespace std;
int main(){
 int as,ap,n;
 cin >> as >> ap >> n;
 int d,s=1;
 while (cin >> d){
       if (s%2 == 0)n+=ap-d;
       else n+=as-d;
       s++;
       cout << n << endl;
 }
}

#include <iostream>
using namespace std;
int main() {
	int a,b;
	while (cin >> a >> b){
      cout << "suma dels cubs entre " << a << " i " << b << ": ";
      int sum=0;
      for (int i=a;i<=b;i++) sum=sum+i*i*i;
      cout << sum << endl;
    }

}

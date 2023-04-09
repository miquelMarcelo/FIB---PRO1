#include <iostream>

using namespace std;

int rotacio_dreta(int x, int k) {

  int m = 1;

  for (int c = x; c > 9; c /= 10){
    m *= 10;
  }

  for (int i = 0; i < k; ++i){
    x = x/10 + m*(x%10);
  }

  return x;

  }

 int main() {

  int x, k;

  while (cin >> x >> k){
    cout << rotacio_dreta(x, k) << endl;
  }
 }

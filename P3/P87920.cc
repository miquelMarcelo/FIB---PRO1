#include <iostream>
#include <vector>

using namespace std;
bool  lo_hay(const vector <int>& s, int sum, int n);
int main(){
    int n;
    while (cin >> n){
          int sum=0;
          vector<int> s(n);
          for (int i=0;i < n;i++){
              cin >> s[i];
              sum+= s[i];
          }
         if (lo_hay(s, sum, n)) cout << "YES" << endl;
         else cout << "NO" << endl;
    }
}
bool  lo_hay(const vector <int>& s, int sum, int n) {
    for (int i = 0; i < n; ++i) {
        if (sum - s[i] == s[i]) return true;
    }
    return false;
}

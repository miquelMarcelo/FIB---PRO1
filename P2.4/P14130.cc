#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<int> s(n);
        for (int i=0;i < n;i++){
            cin >> s[i];
        }
        int count=0;
        for (int i=v.size();i >= 0;i--){
            if (s[n-1] == s[i]) count++;
        }
        cout << count << endl;
    }
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool conte(string s1, string s2);
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i=0;i<n;i++){
        cin >> s[i];
    }
    for (int i=0;i < n;i++){
        cout << s[i] << ":";
        for (int x=0;x < n;x++){
            if (s[i].size() >= s[x].size()){
                if (conte(s[i],s[x])) cout << " " << s[x];
            }
        }
        cout << endl;
    }
}
bool conte(string s2, string s1){
    int i, j;
    i=j=0;
    while (i+s1.size() <= s2.size() and j < s1.size()){
        if (s1[j] == s2[i+j])++j;
        else{
            j=0;
            i++;
        }
    }
    if (j == s1.size()) return true;
    else return false;
}

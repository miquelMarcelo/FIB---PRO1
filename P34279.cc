#include <iostream>

using namespace std;

int main(){
    int h, m, s;
	
    cin >> h >> m >> s;
    
    if (s == 59){
        s=0;
        if (m == 59){
            m=0;
            if(h == 23)h=0;
            else h++;
        }else m++;
    }else s++; 
    
    if (h<=9) cout << "0" << h << ":";
    else cout << h << ":";

    if (m<=9) cout << "0" << m << ":";
    else cout << m << ":";

    if (s<=9) cout << "0" << s << endl;
    else cout << s << endl;

}

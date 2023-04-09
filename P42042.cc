#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
        if(c >= 'a' and c<='z')cout << "minuscula\n";
		
		else if(c >= 'A' and c<='Z') {
			c = c -'A' + 'a';
			cout << "majuscula\n";
		}
			
		if ( c== 'a' or c== 'i' or c== 'e' or c=='o' or c=='u') cout << "vocal" << endl;
		
		else cout << "consonant" << endl;
}

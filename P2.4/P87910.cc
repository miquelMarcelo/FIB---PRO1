#include <iostream>

using namespace std;

void morse (char c, int& n);

int main(){
 int n;
 cin >> n;
 char c;
 int x=n;
 n=0;
 while (cin >> c){
     morse(c,n);
     if (x <= n){
       n=0;
       cout << endl;
   }
 }
 if (n!=0) cout << endl;
 cout << "STOP" << endl;
}

void morse (char c, int& n){
    if (c == 'a'){
       cout << ".-";
       n+=2;
    }else if(c == 'e'){
       cout << ".";
       n+=1;
    }else if (c == 'i'){
       cout << "..";
       n+=2;
    }else if (c == 'o'){
       cout << "---";
       n+=3;
    }else{
       cout << "..-";
       n+=3;
    }
}

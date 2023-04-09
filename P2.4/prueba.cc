#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct dos {
        int posicion;
        int posicion2;
    };

int main(){

    int x=4;
    vector<dos> v(x);

    for (int i =0;i<x;i++) {
            int n;
            cin >> n;
        v[i] .posicion = n;
        cin >> n;
        v[i] .posicion2 = n;
    }

     for (int i =0;i<x;i++) {
            cout << v[i] .posicion << endl;
            cout << v[i] .posicion2 << endl;
    }
    sort (v.begin(), v.end());

    for (int i =0;i<x;i++) {
            cout << v[i] .posicion << endl;
            cout << v[i] .posicion2 << endl;
    }
}

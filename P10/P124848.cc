#include <iostream>
#include <vector>

using namespace std;

int ndigits (int n) {
    if (n / 10 == 0) return 1;
    return 1 + ndigits(n/10);
}

int reverse (int n) {
    if (n / 10 == 0) return n;
    int l = 10;
    int k = ndigits(n);
    for (int i = 2; i < k; i++) l *= 10;
    return ((n % 10) * l) + reverse (n/10);
}

bool es_palindrom (int n) {
    return (n == reverse(n));
}

int main() {
    const int n = 9817189;
    vector<bool>v(n+1, true);
    v[0] = v[1] = false;
    vector<int>aux;
    for (int i = 2; i*i <= n; i++) {
        if (v[i]) {
            for (int j = i * i; j < n and j >= 0; j += i) v[j] = false;
        }
    }
    for (int i = 2; aux.size() < 750; i++) if (v[i] and es_palindrom(i)) aux.push_back(i);
    int k;
    while (cin >> k) cout << aux[k-1] << endl;
}

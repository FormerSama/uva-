#include <bits/stdc++.h>
using namespace std;

#define N 1001
int a, b, r, s;
bool number[N];
vector <int> primes;
void sieve() {
    number[0] = true;
    for (int i = 2; i <= sqrt(N); i++) {
        if (!number[i]) {
            for (int j = (N-1)/i, k = i*j; j >= i; j--, k -= i) {
                if (!number[j])
                    number[k] = true;
            }
        }
    }
}
char c, p[30000000];
int ptr(0);
void Printer(char c) {
    p[ptr++] = c;
    if (ptr == 30000000-1) {
        p[ptr] = '\0';
        puts(p);
        ptr = 0;
    } 
}
void Write(const int &x) {
    int tmp(x), d(0), digit[10];
    while (tmp) {
        digit[d++] = tmp % 10;
        tmp /= 10;
    }
    d--;
    while (d >= 0)
        Printer(digit[d--] + '0');
    return;
}
int main() {
    sieve();
    while (cin >> a >> b) {
        Write(a);
        Printer(' ');
        Write(b);
        Printer(':');
        Printer(' ');
        for (int i = 1; i <= a; i++) {
            if (!number[i])
                primes.push_back(i);
        }
        r = primes.size() & 1 ? b*2-1 : b*2;
        if (r >= primes.size()) {
            for (int i = 0; i < primes.size(); i++) {
                Write(primes[i]);
                Printer(' ');
            }
            Printer('\n');
        }else {
            s = r & 1 ? (primes.size()/2 - (r)/2) : (primes.size()-r)/2;
            for (int i = s; i < s+r; i++) {
                Write(primes[i]);
                Printer(' ');
            }
            Printer('\n');
        }
        primes.clear();
        Printer('\n');
    }
    p[ptr] = '\0';
    puts(p);
    return 0;
}
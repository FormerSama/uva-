#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    while (cin >> number && number) {
        printf("f91(%d) = %d\n", number, number > 100 ? number-10 : 91);
    }
    return 0;
}
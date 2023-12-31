#include <bits/stdc++.h>

using namespace std;

#define fastio ios :: sync_with_stdio(0), cin.tie(0)

int main()
{
    cout << "PERFECTION OUTPUT" << endl;
    unsigned short number;
    while (cin >> number)
    {
        if (number == 0)
        {
            cout << "END OF OUTPUT";
            break;
        }
        printf("%5hu  ", number);
        if (number == 6 || number == 28 || number == 496 || number == 8128)
        {
            cout << "PERFECT" << endl;
            continue;
        }
        if (number == 1)
        {
            cout << "DEFICIENT" << endl;
            continue;
        }
        unsigned short p(2);
        unsigned int factor(1);
        while (p != number)
        {
            if (number % p == 0)
                factor += p;
            p++;
        }
        cout << (factor > number ? "ABUNDANT" : "DEFICIENT") << endl;
    }
    return 0;
}
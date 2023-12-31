#include <bits/stdc++.h>

using namespace std;

#define fastio ios :: sync_with_stdio(0), cin.tie(0)

int main()
{
    unsigned int number;
    while (cin >> number)
    {
        unsigned int c(1), r(1), cnt(1);
        short n(1), m(-1);
        bool t (1);
        cout << "TERM " << number << " IS ";
        while (cnt != number)
        {
            if (c == 1 && t)
                r++, n = 1, m = -1, t = 0;
            else if (r == 1 && t)
                c++, n = -1, m = 1, t = 0;
            else
                c += n, r += m, t = 1;
            cnt++;
        }
        cout << c << "/" << r << endl;

    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

inline bool wave(const unsigned short a, unsigned short f)
{
    if (f == 0)
        return 1;

    else
    {
        int c(1);
        while (c <= a)
        {
            for (int i = 0; i < c; i++)
                cout << c;
            putchar('\n');
            c++;
        }
        c--;
        for (int i = c-1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
                cout << i;
            putchar('\n');

        }
        putchar('\n');
        return wave(a, f-1);  
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned short a, f;
        cin >> a >> f;
        wave(a, f);
    }
    return 0;
}
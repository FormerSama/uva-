#include <bits/stdc++.h>

using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0)

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma comment(linker, "/stack:200000000")

inline unsigned long long reverse(unsigned long long m, int n)
{
    int c, p(0), i(0);
    bool t(1);
    unsigned short number[20];
    unsigned long long temp(m);
    while (temp)
    {
        number[p++] = temp % 10;
        temp /= 10;
    }
    p--;
    c = p;
    if (p == 0 && n == 0) 
        t = 0;
    else
    {
        while (i < p)
        {   
            if (number[p] != number[i])
            {
                t = 0;
                break;
            }
            i++, p--;
        }
    }
    if (t == 1 && n > 0)
    {
        cout << n << " " << m << endl;
        return 1;
    }else
    {
        unsigned short t(0);
        unsigned long long renum(0);
        while (c >= 0)
        {
            renum = (renum << 3) + (renum << 1) + number[t++];
            c--;
        }
        return reverse(renum + m, n+1);
    }
}
int main()
{
    fastio;
    int p;
    unsigned long long number;
    cin >> p;
    while (p--)
    {
        cin >> number;
        reverse(number, 0);
    }
    return 0;
}
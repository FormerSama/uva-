#include <bits/stdc++.h>

using namespace std;

#define fastio ios :: sync_with_stdio(0), cin.tie(0)

float h, u, d, f;
inline void snail(float p, float temp, float less)
{
    while (1)
    {
    temp += u;
    if (temp > h)
    {
        cout << "success on day " << p << endl;
        return;
    }
    temp -= d;
    if (temp < 0)
    {
        cout << "failure on day " << p << endl;
        return;
    }
    u -= less;
    if (u < 0)
        u = 0;
    p++;
    }
}
int main()
{
    fastio;
    
    while (1)
    {
        cin >> h >> u >> d >> f;
        if (h == 0)
            break;
        snail(1, 0, u*f/100);
    }
    return 0;
}
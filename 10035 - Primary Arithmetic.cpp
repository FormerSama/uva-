#include <bits/stdc++.h>

using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0)

inline void arithmetic(unsigned long long n, unsigned long long m)
{
    unsigned short n1[11], n2[11], c(0), nl(0), ml(0);
    unsigned long long temp1(n), temp2(m);
    for (int i = 0; i < 11; i++)
    {
        n1[i] = 0, n2[i] = 0;
    }
    while (temp1 > 0 || temp2 > 0)
    {
        if (temp1 > 0)
        {
            n1[10-nl] = temp1 % 10;
            temp1 /= 10, nl++;
            
        }
        if (temp2 > 0)
        {
            n2[10-ml] = temp2 % 10;
            temp2 /= 10, ml++;
        }    
    }
    for (int i = 10; i >= 0; i--)
    {
        if (n1[i] + n2[i] > 9)
        {
            c++;
            if (i > 0)
            {
                n1[i-1]++;
            }
        }     
    }
    if (c == 0)
        cout << "No carry operation." << endl;
    else if (c == 1)
        cout << c << " carry operation." << endl;
    else
        cout << c << " carry operations." << endl;
}
int main()
{
    unsigned long long n1, n2;
    while (1)
    {
        cin >> n1 >> n2;
        if (n1 == 0 && n2 == 0)
            break;
        arithmetic(n1, n2);
    }
    
    return 0;
}
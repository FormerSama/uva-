#include <bits/stdc++.h>

int main()
{
    char c;
    bool t(0);
    while (scanf("%c", &c) != EOF)
    {
        if (c == '"' && !t)
        {
            putchar('`');
            putchar('`');
            t = 1;
        }else if (c == '"' && t)
        {
            putchar('\'');
            putchar('\'');
            t = 0;
        }else
            putchar(c);

    
    }
    
    return 0;
}
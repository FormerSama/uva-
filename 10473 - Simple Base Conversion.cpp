#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    while (1)
    {
        string number;
        char hx[10];
        for (int i = 0; i < 10; i++)
            hx[i] = 0;
        getline(cin, number);
        if (number[0] == '-')
            break;
        if (number[0] == '0' && number[1] == 'x')
        {
            int len = number.length(), dex(0), temp;
            for (int i = len-1, j = 0; i > 1; i--, j++)
            {
                if (number[i] < '0' || number[i] > '9' )
                {
                    temp = number[i];
                    temp -= 55;
                }else
                {
                    temp = number[i] - '0';
                }
                dex += pow(16, j) * temp;
            }
            cout << dex << endl;
        }
        else
        {
            int p(0), temp = stoi(number);
            while (temp)
            {
                if (temp % 16 < 10)
                    hx[p++] += (temp % 16) + 48;
                else
                    hx[p++] = (temp % 16) + 55;
                temp >>= 4;
            }
            p--;
            cout << "0x";
            for (int i = p; i >=0; i--)
                cout << hx[i];  
            putchar('\n');
        }
    }
    return 0;
}
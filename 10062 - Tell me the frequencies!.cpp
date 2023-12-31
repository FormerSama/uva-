#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    unsigned short ascii[127][2], output[127][2];
    while (getline(cin, n))
    {
        int c, t(0);
        for (int i = 0; i < 127; i++)
        {
            ascii[i][1] = 0;
        } 
        for (int i = 0; n[i] != '\0'; i++)
        {  
            t++;
            c = n[i];
            ascii[c][1] += 1;
        } 
        int k(0), r(0), count(0);
        while (t > 0)
        {
            if (ascii[r][1] != 0)
            {
                output[k][0] = r;
                output[k][1] = ascii[r][1];
                k++, t -= ascii[r][1], count++;
            }
            r++;
        }
        for (int i = 0; i < count-1; i++)
        {
            for (int j = 0; j < count-i-1; j++)
            {
                if (output[j][0] < output[j+1][0])
                {
                    unsigned short tmp1 = output[j][1], tmp0 = output[j][0];
                    output[j][1] = output[j+1][1];
                    output[j][0] = output[j+1][0];
                    output[j+1][1] = tmp1;
                    output[j+1][0] = tmp0;
                }
            }
        }
        for (int i = 0; i < count-1; i++)
        {
            for (int j = 0; j < count-i-1; j++)
            {
                if (output[j][1] > output[j+1][1])
                {
                    unsigned short temp1 = output[j][1], temp0 = output[j][0];
                    
                    output[j][1] = output[j+1][1];
                    output[j][0] = output[j+1][0];
                    output[j+1][0] = temp0;
                    output[j+1][1] = temp1;
                }
                
            }
        }
        for (int i = 0; i < count; i++)
        {
            cout << output[i][0] << " " << output[i][1] << endl;
        }
        putchar('\n');
    }
    return 0;
}
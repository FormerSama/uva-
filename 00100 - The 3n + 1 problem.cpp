#include <bits/stdc++.h>

using namespace std;

int alg(int n)
{
    static int ans(1);
    if (n == 1)
    {
        int output(ans);
        ans = 1;
        return output;
    }
    ans++;
    n = n % 2 == 0 ? n >>= 1 : n*3 + 1;
    return alg(n);
}
int main()
{
    int n, m, max(0), str, end;
    while (cin >> n >> m)
    {
        if (m > n)
            str = n, end = m;
        else
            str = m, end = n;
        for (int i = str; i <= end; i++)
            if (max < alg(i))
                max = alg(i);
        cout << n << " " << m << " " << max << endl;
        max = 0;
    }
    return 0;
}
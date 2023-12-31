#include <bits/stdc++.h>

using namespace std;

#define fastio ios::sync_with_stdio(0), cin.tie(0)

inline void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    fastio;
    int number[10000], i(0);
    while (cin >> number[i])
    {
        insertionSort(number, i+1);
        
        int temp(i);
        if (i == 0) 
            cout << number[i] << endl;
        else
            cout << number[temp >> 1] << endl;

        i++;
    
        if (cin >> number[i])
        {
            
            insertionSort(number, i+1);
            
            int n1(i), n2(n1), ans = (number[n1 >> 1]+number[(n2 >> 1)+1]) >> 1;
            cout << ans << endl;
            i++; 
        }else
            break;  
    }
    
    return 0;
}
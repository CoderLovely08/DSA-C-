#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    array[n] = -1;
    if (n == 1)
    {
        cout << "1" <<" ";
    }
    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > mx && array[i] > array[i + 1])
        {
            ans++;
            mx = max(mx, array[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
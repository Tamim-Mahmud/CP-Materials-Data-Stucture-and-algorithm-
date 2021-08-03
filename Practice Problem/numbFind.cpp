#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {0};
    

    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        a[x] = x;
    }
    cout << a[3] << endl;
    while (n)
    {

        cout<<a[n]<<endl;
        if (a[n] == 0)
        {
            cout << n;
            break;
        }
        n--;
    }
    ///do(n--)
}
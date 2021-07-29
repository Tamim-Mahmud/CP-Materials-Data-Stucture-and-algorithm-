#include <bits/stdc++.h>
using namespace std;

long long fact(long long n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int zero(long long n)
{
    
    if (n % 10 != 0)
    {

       return 0;
    }
    else
    {
        
        return (zero(n/(10))+1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        n = fact(n);
    int x=zero(n);
        cout <<x << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int part(int a[], int lb, int ub)
{
    int start = lb;
    int end = ub;
    int pivot = a[start];

    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(a[start], a[end]);
        }
    }
    swap(a[lb], a[end]);
    return end;
}
void quick(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = part(a, lb, ub);
        quick(a, lb, loc - 1);
        quick(a, loc + 1, ub);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quick(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
    cout << a[i] << " ";
    }
}

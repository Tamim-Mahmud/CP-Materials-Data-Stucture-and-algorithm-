#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    a[0]=5;
    a[1]=7;
    a[2]=9;

    cout<<" Value of array a : "<<&a<<endl;

    cout<<" value of a[0] : "<<&a[0]<<endl;

    //here we see that the array variable store the address of the first element of the array

  cout<<" value of *a : "<<*a<<endl;
    // it will print the value of a[0] because the value of a is pointing the first element of the array

    cout<<" value of *a+1 : "<<a + 1<<endl;
    cout<<" value of *a+2 : "<<a + 2<<endl;

    // falue at a[1] &a[2]

    cout<<" value of *a+1 : "<<*(a + 1)<<endl;
    cout<<" value of *a+2 : "<<*(a + 2)<<endl;


}
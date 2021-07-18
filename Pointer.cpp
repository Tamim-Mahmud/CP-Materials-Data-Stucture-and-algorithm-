#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=5;
    int *px=&x;//Store address in pointer
    cout<< "Value in px :"<< px<<endl;

    *px=6; //Chanege value using pointer
    cout<< "Value in px :"<< *px<<endl;

    cout<< "px+1 VAlue :"<< px + 1<<endl;//pointer value change 4 bit if we add 1 in pointer

    int **ppx;//double pointer only store the address of a ponter
    ppx=&px;
    cout<< "Double pointer Value :"<< ppx<<endl;
     cout<< "Double pointer Value :"<< *ppx<<endl;
     
    
    **ppx=7;

    cout<< "Value in X :"<< x; 


    



} 
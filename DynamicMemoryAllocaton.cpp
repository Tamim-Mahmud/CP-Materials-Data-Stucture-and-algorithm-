#include<bits/stdc++.h>
using namespace std;

int main(){

    int *p=new int;
  
    *p=5;
    p= new int(10);

    *p=50;

    cout<<*p<<endl;

    int *pa=new int[5];

    for(int i=0;i<5;i++){
        cin>>pa[i];
    }
}
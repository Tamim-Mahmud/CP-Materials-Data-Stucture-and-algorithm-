//Recursive finction for factorial
/*
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    else
        {
            return n*fact(n-1);
        }    
}

int main(){
    int n;cin>>n;

    cout<<fact(n);
}
*/
//recursive function for finding number;
#include<bits/stdc++.h>
using namespace std;

bool find(int a[],int n,int len){
   
    if(a[len]==n)
        return true;
    else if(len==0)
        r
        eturn false;
    else 
    return find(a,n,len-1);
}

int main(){
    int ara[5];
    for(int i=0;i<5;i++){
        cin>>ara[i];
    }
    int n;cin>>n;

    bool f=find(ara,n,4);
    cout<<f<<endl;
}
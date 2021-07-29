#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){

        cin>>n;
        int x=sqrt(n);
        if(x%2==0){
            cout<<":"<<" YES"<<endl;
        }
        else{
           cout<<":"<<" NO"<<endl;
        }
    }
}
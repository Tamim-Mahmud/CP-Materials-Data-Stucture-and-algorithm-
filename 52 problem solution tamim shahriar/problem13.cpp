#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        string s;
        getline(cin,s);

        int c=0;
       
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
            c++;
        }
        
        }c++;
        
        cout<<(c*(c-1))<<endl;
    }
}
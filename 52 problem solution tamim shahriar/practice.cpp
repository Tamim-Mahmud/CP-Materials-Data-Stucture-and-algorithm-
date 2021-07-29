#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    string s;
    getline(cin,s);
    int coun=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ')
            coun++;
    }

    cout<<s<<endl;
    cout<<coun<<endl;}
}
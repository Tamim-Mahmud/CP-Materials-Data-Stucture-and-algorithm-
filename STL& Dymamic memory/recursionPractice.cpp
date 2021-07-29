
#include<bits/stdc++.h>
using namespace std;
 void repla(string &s ,int n){
     
     if(n<0)
      return;

      if(s[n]=='a'){
          s[n]='x';
    }
    
      repla(s,(n-1));
 }

int main(){
    string s;
    cin>>s;int n=s.length();
    repla(s,n);
    cout<<s;

    

}
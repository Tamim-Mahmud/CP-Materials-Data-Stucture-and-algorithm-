#include<bits/stdc++.h>
using namespace std;

string keypadArr[]={"","","abc","def","ijk"};

void keypad(string s,string ans){
     if(s.length()==0){
         cout<<ans<<endl;
         return;
     }
     char ch=s[0];
     string ros=s.substr(1);
     string code=keypadArr[ch-'0'];
    
     for(int i=0;i<code.length();i++){

         cout<<ros.length()<<endl;
        
         keypad(ros,ans+code[i]);
         cout<<ans<<endl;
     }
 }
int main(){
    keypad("2","a");

}
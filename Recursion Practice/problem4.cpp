//Write a recursive function that checks whether a string is a palindrome (a palindrome is a string that's the same when reads forwards and 
//backwards.

#include<bits/stdc++.h>
using namespace std;
char ans[4];
int i=0;
void palindrom(string s,int n){
    if(n<0){
        return;
    }
    
      ans[i]=s[n-1];
    i++;
    palindrom(s,n-1);   
    
}
int main(){
    string s;
    cin>>s;

   palindrom(s,s.length());
    if(ans==s){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
        
}
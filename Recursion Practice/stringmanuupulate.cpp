#include<bits/stdc++.h>
using namespace std;
int a=0;
int find(string s,char ch,int n){
    if(n<0) return 0;

    if(s[n]==ch) {
       a++;
   }
    return  find(s,ch,n-1);
}
int main(){
    string s;
    char ch;
    cin>>s>>ch;

    find(s,ch,s.length());
    cout<<a;
}
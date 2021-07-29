#include<bits/stdc++.h>
using namespace std;

void str_revrese(string s){
    if(s.length()==0) return;

    string rev=s.substr(1);
    str_revrese(rev);
    cout<<s[0];
}
int main(){
    string s;
    cin>>s;
    str_revrese(s);
}
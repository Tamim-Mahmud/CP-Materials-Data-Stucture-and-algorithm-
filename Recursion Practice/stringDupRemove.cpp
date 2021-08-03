#include<bits/stdc++.h>
using namespace std;
string removeDuplicate(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ret=removeDuplicate(s.substr(1));

    if(ch==ret[0]){
        return ret;

    }
    else
        return ch+ret;
}
int main(){
    string s;
    cin>>s;

    cout<<removeDuplicate(s)<<endl;
}
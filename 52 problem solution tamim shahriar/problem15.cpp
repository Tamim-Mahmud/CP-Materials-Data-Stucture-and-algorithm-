#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int a[26]={0};

    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<= 'z'){
            a[s[i]-'a']++;
        }
    }

    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
            char ch='a'+i;
            cout<<ch<<" :"<<a[i]<<endl;
        }
    }
}
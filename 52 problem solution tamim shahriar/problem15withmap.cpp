#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){

     map<char,int>m;   
     string s;cin>>s;
    for(int i=0;s[i]!='\0';i++) {
        m[s[i]]++;
    }
    map<char,int >:: iterator it;

    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" = "<<(*it).second<<endl;
    }
 }


}
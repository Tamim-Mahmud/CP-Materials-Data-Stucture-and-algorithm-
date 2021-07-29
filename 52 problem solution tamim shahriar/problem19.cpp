#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int space=0;

    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' ') {
            space++;
        }
    }
    cout<<space+1<<endl;
    cout<<s<<endl;
}
//Write a recursive function that, given a string s, prints the characters of s in reverse order.

#include<bits/stdc++.h>
using namespace std;

void reverseStr(string s,int n){
    if(n<0){
        return;
    }
    cout<<s[n-1];

    reverseStr(s,n-1);
}

int main(){
    reverseStr("abcd",4);

}
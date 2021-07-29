/*
queue uses fifo data stucture(first in first out).we can do three operation in a stl stack 
1.push-this means insert a element in top of the stack
2.pop-remove the first inserted  element
3.front-this is used to view the front or element which is inserted first.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;

    q.push("tamim");
    q.push("mobin");
    q.push("sristy");
    q.push("bulbul");
    q.push("mita");
    q.push("ruma");

    while(!q.empty()){
        cout<<q.front()<<endl;//view the front element with front().
        q.pop();
    }
     
}
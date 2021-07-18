/*stack uses lifo data stucture(last in first out).we can do three operation in a stl stack 
1.push-this means insert a element in top of the stack
2.pop-remove the top/last element
3.top-this is used to view the top/(last in) element
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s ;
    s.push(2);//insert element;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    while(!s.empty()){
        cout<<s.top()<< endl;//view the top element
        s.pop();//remove the top element
    }

}

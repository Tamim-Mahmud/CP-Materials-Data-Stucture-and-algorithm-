

#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
     map<int,string> ::iterator it;//we have to use iterator to traverse map
    for(it=m.begin(); it!= m.end();++it){
        cout<<(*it).first<< " "<<(*it).second<<endl;// compleexity O(log(n))
    }
}
int main(){
    map<int,string> m;
    //maps store the value in sorted order
    m[0]="abc";       //here '0' is the map key and 'abc is the value';
    m[9]="bcd";       //complexity O(log(n))
    m[2]="ab";

    m[2]="abcd";        //maps keys are unique if we replace a maps key  with its value than the value will be replaced but the key will always be same.

    m[10];               //if it is initialized without any value than it will be zero
    m.insert({4,"adc"});   //we can also initialize value with insert function
    


    
    //find function in map,  map function return a iterator
    map<int,string> :: iterator it;

    it=m.find(4);                  //find the value in key 9 and the complexity is O(log(n))
          //if there is no corresponding key which is passed in the parameter than the FIND function return the end() iterator
    if(it==m.end()){
        cout<<"NO value"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }


    //erase function in map
    m.erase(9);                   //we can erase value by key value 

    if(it!=m.end()){
    m.erase(it);
    }           /*and we also can erase value by iterator ,it will delete the corresponding iterator values.
     and here if the iterator return an end() iterator then that will be a error so we have to check if the iterator value is not end()
     than we can do that.
    */
    print(m);
}
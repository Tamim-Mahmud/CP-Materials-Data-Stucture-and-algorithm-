//set is nothing but a maps which has no value part.so it has only the key value part .and it will prit unique output with lexocographical order
//time complexity  of set is as maps. for insertion delation it is O(log(n)).
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;

    s.insert("tamim");
    s.insert("mobin");
    s.insert("sristy");
    s.insert("mita");
    s.insert("bulbul");
    s.insert("ruma");
//s.insert(str); thsi is how we insert value on a set;

  
set<string> ::iterator it;
   it=s.find("mobin");
   if(it!=s.end())
   {
       s.erase(it);//complexity o(log(n)).s.erase can take iterator and also a string as its parameter.
   }
 
    for(it=s.begin();it!=s.end();++it){
        cout<<(*it)<<endl;
    }



}
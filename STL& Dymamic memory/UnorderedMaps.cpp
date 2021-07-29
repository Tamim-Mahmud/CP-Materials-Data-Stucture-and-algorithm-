/* maps and unordered_maps are same in many field but the complexity(assignment ,input etc) of u_m is O(1) wheather in maps it was O(log(n))
 and i=the inbuild imolimentation of Unordered_maps is different it isnt use tree like maps , here it uses hash table
 And also for inbuild implementation we can not use complex data type in unordereed maps.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> um;

    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        um[s]=um[s]+1;
    }
    unordered_map<string,int>:: iterator it;

    for(it=um.begin();it!=um.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
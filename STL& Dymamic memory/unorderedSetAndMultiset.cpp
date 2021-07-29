//unordered_set uses hash table for internal implementation thats why the insertion ,finding and other complexity of this is O(1).
//we can not use complex data stucture in u_s like pair vector etc. because thi type of data stucucture hash is not available in stl
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s;

    int n;cin >>n;

    for (int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);//complexity is O(1)
    }
    
    int q; cin>>q;
    for(int i=0;i<q;i++){
        string str;
        cin>>str;
        if(s.find(str)!=s.end()){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
/*in multiset we can use to allow multiple key like multi map. it uses red black tree so the complexity is O(log(n)).
and it allows multiple value to store but it also store the value in sorted order
and when it come to duplicate value selection find() function return the first value of the set.
if we run only (not with find() operation ) erase() operation on the duplicate values than it will erase all that type duplicate/ 
*/
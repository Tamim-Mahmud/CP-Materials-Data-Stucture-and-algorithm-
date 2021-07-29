#include<bits/stdc++.h>
using namespace std ;

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++) //complexity of v.size is O(1)
    {
        cout << v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v[5];
     for(int i=0;i<5;i++){
        int s ; cin>>s;//declearing size of every vector

        for(int j=0;j<s;j++){
            int x; cin>>x;
            v[i].push_back(x);
        }
     }
     cout<<"output : ";


     //printing vector
     for (int i=0;i<5;i++){
         printVec(v[i]);
     }
     
}
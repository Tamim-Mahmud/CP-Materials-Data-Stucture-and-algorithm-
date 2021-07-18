#include<bits/stdc++.h>
using namespace std ;
void printVec(vector<pair<int,int>> &v)
{
    for (int i = 0; i < v.size(); i++) //complexity of v.size is O(1)
    {
        cout << v[i].first << " "<<v[i].second<< endl;
    }
}
int main()
{
   // vector<pair<int,int> > v={{1,2},{2,3},{4,5}};
    //printVec(v);
    vector<pair<int,int>>v1;
    int s;cin>>s;
    for (int i=0;i<s;i++)
    {
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});//here we have to use curly brackrt for pair,we can also use : make pair(x,y)
    }
    printVec(v1);

    
}
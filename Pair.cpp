#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;//declaration of a pair

    p=make_pair(2,"abc");//initialize a pair

    p={2,"abcd"}; //wecan initialize it this way also

    cout<<p.first<< " "<<p.second<<endl;

    pair<int ,string> &p1=p;
    
    //p1.first=3;


    cout<<p1.first<< " "<<p1.second<<endl;

    //array of pairs

    pair<int,int> ara[3];

    ara[0]={1,2};
    ara[1]={3,4};
    ara[2]={5,6};

   for(int i=0;i<3;i++)
    { 
        swap(ara[i].first,ara[i].second);//swap the element of pair
        cout<< ara[i].first<< " "<<ara[i].second<<endl; 
    }

    //input in pair

    pair<int,string> p2;

    cin>>p2.first;
    cin>>p2.second;

    cout<<p2.first<<" " ; cout<<p2.second;

}
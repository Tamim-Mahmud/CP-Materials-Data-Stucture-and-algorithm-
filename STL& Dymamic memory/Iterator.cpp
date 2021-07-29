#include <bits/stdc++.h>
using namespace std;

//iterator is used to point the address of a vecor first element
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < v.size(); i++)
    {
        //cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it1; //iterator declaration

    //find output of a vector using iterator
    for (it1 = v.begin(); it1 != v.end(); it1++){
        //cout << *it1 << " ";
    }
    
    //using of iterator in vector pair
    vector<pair<int ,int>> v1={{1,2},{2,3},{3,4}};

    vector<pair<int,int>>:: iterator it;//iterator decleration

    for(it=v1.begin(); it!=v1.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++) //complexity of v.size is O(1)
    {
        cout << v[i] << " ";
    }
}
int main()

{
    //initialize and input of a vector

    /*  vector<int> v;
    int s;cin>>s;

    for (int i=0;i<s;i++)
    {
        int x;cin>>x;
        v.push_back(x);//complexity O(1)
    }*/
    // printVec(v);

    vector<int> v1(10, 3); //first one is vector size and second one is by which value we want to fill the vector

    v1.push_back(10); //vector size is not fixed we can add element even if we initialize the value of the vector; a vector is always dynamic

    printVec(v1);

    v1.pop_back(); //with pop_back function we can elemenate the last value of a vector;
    cout << endl;
    printVec(v1);

    //vector copy

    vector<int> v2=v1;//time complexity of vector copy in O(n)
    cout << endl;
    printVec(v2);
}
#include<bits/stdc++.h>
using namespace std;
void findpermute(string input,int start,int len)
{
    if(start==len)
    {
        cout<<input<<endl;
    }
    for(int i=start;i<=len;i++)
    {
        swap(input[start],input[i]);
        findpermute(input,start+1,len);
        swap(input[i],input[start]);
    }
}

int main()
{
    string input;
    cin>>input;
    int len=input.length();
    findpermute(input,0,len-1);
}

#include<bits/stdc++.h>
using namespace std;

int sub(string input,string* output)
{
    if(input.empty())
    {
        output[0]="";
        return 1;
    }
    string str=input.substr(1);
    int count=sub(str,output);
    for(int i=0;i<count;i++)
    {
        output[count+i]=input[0]+output[i];
    }
    return 2*count;
}

int main()
{
    string input;
    cin>>input;

    string* output=new string[100];
    int len=sub(input,output);
    for(int i=0;i<len;i++)
    {
        cout<<output[i]<<endl;
    }
}

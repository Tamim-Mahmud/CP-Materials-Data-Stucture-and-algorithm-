#include<bits/stdc++.h>
using namespace std;
int lcs(int i,int j,string a,string b,int** dp)
{
    if(a[i]=='\0' || b[j]=='\0')
    {
        return 0;
    }
    int m=a.length();
    int n=b.length();
    if(dp[m-i][n-j]>-1)
    {
        return dp[m-i][n-j];
    }

    if(a[i]==b[j])
    {
        dp[m-i][n-j]=1+lcs(i+1,j+1,a,b,dp);
        return dp[m-i][n-j];
    }
    else
    {
        int a1=lcs(i,j+1,a,b,dp);
        int b1=lcs(i+1,j,a,b,dp);
        dp[m-i][n-j]=max(a1,b1);
        return dp[m-i][n-j];
    }
}

int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int m=a.length();
    int n=b.length();
    int** dp=new int*[m+1];
    for(int i=0;i<=m;i++)
    {
        dp[i]=new int[n+1];
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=-1;
        }
    }
    cout<<lcs(0,0,a,b,dp);
}

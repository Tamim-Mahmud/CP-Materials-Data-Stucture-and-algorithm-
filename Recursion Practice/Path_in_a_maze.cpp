#include<bits/stdc++.h>
using namespace std;

int pathFinder(int n,int i,int j){
    if(i==n-1 &&j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return pathFinder(n,i+1,j)+pathFinder(n,i,j+1);
}

int main(){
   cout<<pathFinder(5,0,0)<<endl;
}
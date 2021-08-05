#include<bits/stdc++.h>
using namespace std;
int knapSack(int w[], int p[],int n,int k_w){

    if(n==0 || k_w<=0){
        return 0;
    }
    if(w[n-1]>k_w){
        return knapSack(w,p,n-1,k_w);
    }

  return max(knapSack(w,p,n-1,k_w-w[n-1])+ p[n-1] ,knapSack(w,p,n-1,k_w));

}
int main(){
    int w[]={10,20,30};
    int p[]={100,50,150};
    int k_w=50;

    cout<<knapSack(w,p,3,k_w)<<endl;

}
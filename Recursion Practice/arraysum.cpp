#include<bits/stdc++.h>
using namespace std;
int sum(int ar[],int n){
    if(n<0) return 0;

    return ar[n]+sum(ar,n-1);

}
int main(){
    int ar[9]={1,2,3,4,5,6,7,8,9};
    cout<<sum(ar,8);
}
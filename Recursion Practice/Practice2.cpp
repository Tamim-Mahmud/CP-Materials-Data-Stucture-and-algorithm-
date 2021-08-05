//Write a recursive function that, given a number  n, returns the sum of the digits of the number n.

#include<bits/stdc++.h>
using namespace std;

int sum(int num,int ans){
    if(num<=0){
        return 0;
    }
   
     ans=num%10;
    return sum(num/10,ans)+ans;
           
    
   
    
}
int main(){
    cout<<sum(12345,0)<<endl;
}
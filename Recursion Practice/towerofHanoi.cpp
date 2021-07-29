#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n,char source, char helper, char dest){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,source,dest,helper);
    cout<<"MOve from : "<<source<<" To "<<dest<<endl;
    towerOfHanoi(n-1,helper,source,dest);
} 
int main(){
    int n;cin>>n;
    towerOfHanoi(n,'a','b','c');
}

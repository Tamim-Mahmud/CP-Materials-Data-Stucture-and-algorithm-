#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while(t--){
        int n;cin>>n;
        int ans;

        int a;
        a=n/5;
        ans=a;
        while(a>=5){
            ans+=a/5;
            a=a/5;
 }
        cout<<ans<<endl;
    }
    
}
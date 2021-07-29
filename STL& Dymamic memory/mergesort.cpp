#include<bits/stdc++.h>
using namespace std;

//const int N=8;

void merge(int a[],int lb, int mid, int ub){

    int b[ub+1];
    int i=lb;
    int j=mid+1;
    int k=lb;
    

    while(i<=mid &&j<=ub){
        if(a[i]>=a[j]){
            b[k]=a[j];
            j++;
        }
        else{
            b[k]=a[i];
            i++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            j++;k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i];
            k++;i++;
        }
    }
    for(int l=lb;l<=ub;l++){
        a[l]=b[l];
    }
    cout<<lb<<" "<<mid<<" "<<ub<<endl;
 }

void mergesort(int a[],int lb, int ub){

     if(lb<ub){
         
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main(){
    int a[6]={90,12,10,1000,10,120};
    mergesort(a,0,5);

    for (int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
}

#include<iostream>
using namespace std;
int binsrch(int a[100000],int n,int k){
    int s=0,l=n-1,mid;
    while(s<=l){
        mid=s+((l-s)/2);
        if(a[mid]==k)   return mid+1;
        if(a[mid]<k)    s=mid+1;    else l=mid-1;
    }

}
int main(){
    int n,a[100000];    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);

    int t,k;cin>>t;
    for(int i=0;i<t;i++){
        cin>>k;
        cout<<binsrch(a,n,k)<<endl;
    }

}

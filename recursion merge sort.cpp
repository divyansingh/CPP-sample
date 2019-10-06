#include<iostream>
using namespace std;
void mergearray(int a[],int s,int e){
    int mid=(s+e)/2;
    int b[100];
    for(int i=s;i<=e;i++)   b[i]=a[i];
    int i=s,j=mid+1,k=s;
    while(i<=mid&&j<=e){
        if(b[i]<b[j]){
            a[k]=b[i];
            k++;i++;
        }
        else{
            a[k]=b[j];
            j++;k++;
        }
    }
    while(i<=mid){
        a[k]=b[i];
        i++;k++;
    }
    while(j<=e){
        a[k]=b[j];
        j++;k++;
    }
}
void mergesort(int a[],int s,int e){
    if (s>=e)  return;
    int mid=(s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);
    mergearray(a,s,e);
}
int main(){
    int n;  cin>>n;
    int a[100];
    for(int i=0;i<n;i++)    cin>>a[i];
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
    return 0;
}

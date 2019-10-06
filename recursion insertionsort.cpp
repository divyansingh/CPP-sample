#include<iostream>
using namespace std;
void insertionsort(int a[],int n,int s){
    if(s>=n)    return ;
    int j=s,temp=a[j];
    for(;j>0;j--)
        {
            if(a[j-1]<temp)     break;
            else a[j]=a[j-1];

        }
    a[j]=temp;
    insertionsort(a,n,s+1);
}
int main(){
    int n;  cin>>n;
    int a[100];
    for(int i=0;i<n;i++)    cin>>a[i];
    insertionsort(a,n,1);
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
    return 0;
}

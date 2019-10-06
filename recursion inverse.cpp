#include<iostream>
using namespace std;
void inverse(int a[],int n,int p){
    if(n==0)    return ;
    int val=a[p];
    inverse(a,n-1,p+1);
    a[val]=p;
}
int main(){
    int n;  cin>>n;
    int a[100];
    for(int i=0;i<n;i++)    cin>>a[i];
    inverse(a,n,0);
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
    return 0;

}


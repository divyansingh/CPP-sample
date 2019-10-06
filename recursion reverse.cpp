#include<iostream>
using namespace std;
void reverse1(int a[],int n){
    if(n<=1)    return ;
    swap(a[0],a[n-1]);
    reverse1(a+1,n-2);
}
int main() {
    int n;  cin>>n;
    int a[100];
    for(int i=0;i<n;i++)    cin>>a[i];
    reverse1(a,n);
    for(int i=0;i<n;i++)   cout<<a[i]<<" ";
    return 0;
}

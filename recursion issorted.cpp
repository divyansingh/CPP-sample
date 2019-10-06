#include<iostream>
using namespace std;
bool issorted(int a[],int n){
    if (n==1)   return true;


    return (a[n-1]>=a[n-2]&&issorted(a,n-1));
}
int main(){
    int n;  cin>>n;
    int a[100];
    for(int i=0;i<n;i++)    cin>>a[i];
    if(issorted(a,n))   cout<<"Sorted";
    else        cout<<"Not";
    return 0;
}

#include<iostream>
using namespace std;
bool isreverse(int a[],int n){
    if(n<=1)return true;
    return (a[0]==a[n-1]&&isreverse(a+1,n-2));
}
int main() {
    int n;  cin>>n;
    int a[100]={0};
    for(int i=0;i<n;i++)    cin>>a[i];
    if(isreverse(a,n))   cout<<"true";
    else cout<<"false";
	return 0;
}

#include<iostream>
using namespace std;
bool iscontain(int a[],int n,int f){
    if(n==1){
        if(a[0]==f)     return true;
        else return false;
    }
    return (a[0]==f||iscontain(a+1,n-1,f));
}
int main() {
    int n,f;  cin>>n;
    int a[100];
    for(int i=0;i<n;i++)    cin>>a[i];
    cin>>f;
    if(iscontain(a,n,f))    cout<<"true";
    else cout<<"false";
	return 0;
}

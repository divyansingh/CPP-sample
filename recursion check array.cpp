#include<iostream>
using namespace std;
bool check(int a[],int n){
    if(n==0) {
        if(a[0]==7) return true;
         return false;
    }
    if(a[n-1]==7) return true;

    check(a,n-1);
}
int main(){
    int n;  cin>>n;
    int a[100];
    for(int i=0;i<n;i++)    cin>>a[i];
    if(check(a,n))  cout<<"exist  ";
    else cout<<"Does not Exist";
    return 0;
}

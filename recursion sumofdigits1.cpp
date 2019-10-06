#include<iostream>
#include<string>
using namespace std;
int sumd(string a,int n){
    if(n<=0)    return 0;
    return a[n-1]+sumd(a,n-1);
}
int main(){
    string a;
    cin>>a;
    cout<<sumd(a,a.length());
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
bool ispallindrime2(string a,int n,int s){
    if(n==1)    return true;
    return (a[s]==a[n-1]&&ispallindrime2(a,n-1,s+1));
}
int main() {
    string a;
    cin>>a;
    if(ispallindrime2(a,a.length(),0))    cout<<"true";
    else    cout<<"false";
    return 0;
}

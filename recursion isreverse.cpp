#include<iostream>
#include<cstring>
using namespace std;
bool isreverse(string a,string b,int s,int n){
    if(n==1)    {
       if(a[s]==b[n-1])   return true;
        else    return false;}
    return (a[s]==b[n-1]&&isreverse(a,b,s+1,n-1));
}
int main() {
    string a,b;
    cin>>a>>b;
    if(isreverse(a,b,0,a.length())&&a.length()==b.length())   cout<<"true";
    else    cout<<"false";
    return 0;
}

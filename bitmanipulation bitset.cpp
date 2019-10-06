
#include<iostream>
using namespace std;
int main() {
    int n,sum=0,t;
    cin>>n>>t;
   /* while(n>0){
        if(n%2==1)  sum++;
        n/=2;
    }*/
    /*while(n!=0){
        n=(n&(n-1));
        sum++;
    }*/

    if(((n&(n-1))&1>>t)==0) cout<<"yes";
        else cout<<" no";
    return 0;
}

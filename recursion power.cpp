#include<iostream>
using namespace std;
int power(int a,int n){
    if(n==0)    return 1;
    int hp=power(a,n/2);

    if (n%2==0) return hp*hp; else return a*hp*hp;
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<power(a,n);
    return 0;
}

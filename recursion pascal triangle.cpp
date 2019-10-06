#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1)    return 1;
    return n*factorial(n-1);
}
int ncr(int n,int r){
    return (factorial( n)/(factorial(n-r)*factorial(r)));
}
void pascaltriangle( int n){
    if(n<=0)    return;
    pascaltriangle(n-1);
    for(int i=0;i<n;i++)    cout<<ncr(n-1,i)<<"  ";
    cout<<endl;
}
int main(){
    int n; cin>>n;
    pascaltriangle(n);
    return 0;
}

#include<iostream>
using namespace std;
void bing(int n){

    if(n==0)    return;
    char a[100][100]{"zero","one","two","three","four","five","six","seven","eight","nine"};

        bing(n/10);
        cout<<a[n%10]<<" ";
}
int main(){
    int n;  cin>>n;
    bing(n);
    return 0;
}

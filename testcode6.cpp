#include<iostream>
using namespace std;
int main(){
    int n,a[100],sw=0;  cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]) sw++;
                swap(a[j],a[j+1]);
        }
    cout<<sw;
    return 0;

}

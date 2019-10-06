#include<iostream>
using namespace std;
void selsort(int a[],int n){
    if(n<=1)    return ;

        int sm=0,i;
        for( i=1;i<n;i++){
            if(a[i]<a[sm])
            sm=i;
        }
        swap(a[0],a[sm]);
        selsort(a+1,n-1);

}
int main(){
    int n;  cin>>n;
    int a[100];
    for(int i=0;i<n;i++)    cin>>a[i];
    selsort(a,n);
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
    return 0;
}


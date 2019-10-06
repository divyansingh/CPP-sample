#include<iostream>
using namespace std;
int slength(char a[]){
    if(a[0]=='\0')  return 0;
    int n=slength(a+1)+1;
    return n;
}
void movex(char a[],int n){
    if(n==1)    return ;
    for(int i=0;i<n-2;i++)
    {
        if(a[i]=='x'){
            swap(a[i],a[i+1]);

        }
    }
    movex(a,n-1);
}
int main() {
    char a[100];
    cin.getline(a,100);
    movex(a,slength(a));
    cout<<a;

	return 0;
}

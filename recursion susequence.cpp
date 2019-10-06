#include<iostream>
#include<cstring>
using namespace std;
int subs(char a[],int in,string s[]){
    if(a[in]=='\0'){
        s[0]="";
        return 1;}
    int c=subs(a,in+1,s);
    for(int i=0;i<c;i++)
        s[c+i]=a[in]+s[i];
    return 2*c;
}
int main(){
    char a[1000];
    cin>>a;
    string s[1000];
    int c=subs(a,0,s);
    cout<<c<<endl;
    for(int i=0;i<c;i++)    cout<<s[i]<<" ";
    return 0;
}

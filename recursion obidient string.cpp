#include<iostream>
using namespace std;
bool obbs(char a[],int s){
    if(a[s]=='\0')  return true;
    if(a[0]!='a')   return false;
    s+=1;
    if(!(a[s]=='b'&&a[s+1]=='b')) return false;
    s+=2;
    if(a[s]=='b'&&a[s+1]=='b')
        if(a[s+2]!='a')   return false;
    return obbs(a,s+1);
}
int main(){
    char a[100];
    cin.getline(a,100);
    if(obbs(a,0))   cout<<"true";
    else cout<<"false";
    return 0;
}

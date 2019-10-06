#include<iostream>
using namespace std;
void replacepi(char a[],int s,char o[],int p){
    if(a[s]=='\0'){
        o[p]='\0';
        return;
    }
    if((a[s]=='3'&&a[s+3]!='\0')&&a[s+1]=='.'&&a[s+2]=='1'&&a[s+3]=='4'){
        o[p++]='p';
        o[p++]='i';
        replacepi(a,s+4,o,p);
    }
    else {

        o[p++]=a[s];
        replacepi(a,s+1,o,p);
    }

}
int main(){
    int n;  cin>>n;
    for(int i=0;i<n;i++){
        char a[100],o[100];
        cin.getline(a,100);
        replacepi(a,0,o,0);
        cout<<o;
    }
    return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100];
    cin.getline(a,100);
    int n;  cin>>n;
    for(int i=0;a[i]!='\0';i++){
        if(isdigit(a[i])){
            if(int(a[i])+4<=56) a[i]+=n%10;
            else  if(n%10)  a[i]+=n%10-10;
        }
    }
    cout<<n%26;
    cout<<endl<<a;
    return 0;
}

#include<iostream>
using namespace std;
void insideparan(char a[],int s ,bool t){
    if(a[s]=='\0')  return;
      if(t)   cout<<a[s];
    if(a[s]=='(')   t=true;
    insideparan(a,s+1,t);
    if(a[s+1]==')')   t=false;

}
int main() {
    char a[1000];
    cin.getline(a,1000);
    bool t=false;
    insideparan(a,0,t);
    return 0;
}

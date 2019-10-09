#include <iostream>
using namespace std;
void toggle(char a[]){
    if(a[0]=='\0')  return;
    if(a[0]>='a'&&a[0]<='z')    a[0]-=32;
    else    a[0]+=32;
    toggle(a+1);
}
 
int main()
{
    char a[1000];   cin.getline(a,1000);
    toggle(a);
    cout<<a;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int num[10]={0};
    char a[1000];
    cin.getline(a,1000);

    for(int i=0;a[i]!='\0';i++) {    num[a[i]-'1'+1]++;
    cout<<a[i]<<endl;}
    for(int i=0;i<10;i++)       cout<<i<<" "<<num[i]<<endl;
}

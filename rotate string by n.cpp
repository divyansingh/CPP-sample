#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char a[100],temp[100];
    cin.getline(a,100);

    int n,l=strlen(a);  cin>>n;

    for(int i=0;i<n;i++)    temp[i]=a[l-n+i];
   for (int i=l-n-1;i>=0;i--) temp[i+n]=a[i];
    for(int i=0;i<l;i++)    a[i]=temp[i];
    cout<<endl<<"after ROTATING :"<<a;
    return 0;

}

#include<iostream>
using namespace std;
int main()
{
   int n,i;
   cin>>n;
   int a[n],inv[n];
   for(i=0;i<n;i++) cin>>a[i];
   for(i=0;i<n;i++)
   {
       inv[a[i]]=i;
   }
   for(i=0;i<n;i++)
   {
       if(a[i]!=inv[i]) break;
   }
   if(i<n-1)    cout<<"no";
   else         cout<<"yes";



    return 0;


}


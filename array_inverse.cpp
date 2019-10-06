#include<iostream>
using namespace std;
void arrayinv(int a[],int inv[],int n)
{
    int i;
     for(i=0;i<n;i++)
   {
       inv[a[i]]=i;
   }
      for(i=0;i<n;i++) a[i]=inv[i];


}

int main()
{
   int n,i;
   cin>>n;
   int a[n],inv[n];
   for(i=0;i<n;i++) cin>>a[i];
    arrayinv(a,inv,n);
   for(i=0;i<n;i++) cout<< a[i]<<endl;
    return 0;


}

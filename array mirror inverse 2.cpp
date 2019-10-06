#include <iostream>
using namespace std;
bool mirrorinv(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[a[i]]!=i)
        break;
    }
    if(i==n)    return true;
    else return false;
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)     cin>>a[i];
  if( mirrorinv(a,n))   cout<<"TRUE";
  else cout<<"false";
  return 0;
}

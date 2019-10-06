#include<iostream>
using namespace std;
void merge_array(int a[],int b[],int m,int n)
{
  int i=m-1,j=n-1,k=m+n-1;
  while(i>=0&&j>=0)
  {
      if(a[i]>b[j])
      {
        a[k]=a[i];
        i--;k--;
      }
      else
      {
         a[k]=b[j];
        j--;k--;
      }
  }

}
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m+n],b[n];
    for(int i=0;i<m;i++)     cin>>a[i];
    for(int i=0;i<n;i++)     cin>>b[i];
    merge_array(a,b,m,n);
    for(int i=0;i<m+n;i++)     cout<<a[i]<<" ";
    return 0;
}

#include<iostream>
using namespace std;
void insertion_sort(long a[],long n)
{
   for(long i=1;i<n;i++)
    {
        long j,temp=a[i];
        for( j=i;j>0;j--)
        {
            if(a[j-1]<temp)     break;
            else a[j]=a[j-1];

        }
         a[j]=temp;
    }


    for(long i=0;i<n;i++)    cout<<a[i]<<" ";
}
int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)    cin>>a[i];
    insertion_sort(a,n);
    return 0;

}

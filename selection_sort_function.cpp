#include<iostream>
using namespace std;
void selection_sort(long a[],long n)
{
    for(long i=0;i<n-1;i++)
    {
        long lowest=i;
        for(long j=i+1;j<n;j++)
        {
            if(a[j]<a[lowest])
            {
                lowest=j;
            }
        }
        swap(a[lowest],a[i]);
    }


    for(long i=0;i<n;i++)    cout<<a[i]<<" ";
}
int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)    cin>>a[i];
    selection_sort(a,n);
    return 0;

}

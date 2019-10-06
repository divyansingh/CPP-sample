#include<iostream>
using namespace std;
void bubble_sort(long a[],long n)
{
    for(long i=0;i<n-1;i++)
    {

        for(long j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                 swap(a[j+1],a[j]);

            }

        }

    }

}
int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)    cin>>a[i];
    bubble_sort(a,n);
    for(long i=0;i<n;i++)    cout<<a[i]<<" ";
    return 0;

}

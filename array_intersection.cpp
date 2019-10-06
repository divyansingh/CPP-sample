#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j+1]<a[j]) swap(a[j+1],a[j]);
}
void intersection(int a[],int b[],int d[],int n,int &k )
{
    int i=0,j=0;
    while(i<n||j<n)
    {
        if(a[i]==b[j])
        {
            d[k]=a[i];
            i++;j++;k++;
        }
        else
            if(a[i]<b[j])   i++;
            else            j++;
    }

}
int main()
{
    int n,k=0;
    cin>>n;
    int a[n],b[n],d[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];
    bubble_sort(a,n);
    bubble_sort(b,n);
    intersection(a,b,d,n,k);
    cout<<"[";
    for(int i=0;i<k;i++)
    {
        cout<<d[i];
        if(i!=k-1)  cout<<", ";
    }
    cout<<"]";
    return 0;
}

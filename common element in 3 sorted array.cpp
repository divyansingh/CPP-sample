#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j+1]<a[j]) swap(a[j+1],a[j]);
}

int main()
{
    int n;  cin>>n;
    int a[n],b[n],c[n],d[n]={0};
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];
    for(int i=0;i<n;i++)    cin>>c[i];
    bubble_sort(a,n);
    bubble_sort(b,n);
    bubble_sort(c,n);
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)    cout<<b[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)    cout<<c[i]<<" ";
    cout<<endl;
    int i=0,j=0,k=0,n1=0;
    while(i<n||j<n||k<n){
        if(a[i]==b[j]&&b[j]==c[k]){
            d[n1]=c[k];
            k++;i++;j++;n1++;
        }
        else{
        if(a[i]<=b[j]&&a[i]<=c[k]){    i++;}
            else{
                if(b[j]<=a[i]&&b[j]<=c[k]){    j++;}
                    else {   k++;}}}
    }

    for(int i=0;i<n1;i++)    cout<<d[i]<<" ";

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a[7]={21,45,64,93,15,89,69};
    int n=7;
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";//lowest  element moves to left in each iteration
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        int lowest=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[lowest])
            {
                lowest=j;
            }

        }
         int temp=a[lowest];
            a[lowest]=a[i];
            a[i]=temp;
    }
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";

}

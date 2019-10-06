
#include<iostream>
using namespace std;
int sum(int a[], int n)
{
    int s=0;
    for(int i=0;i<n;i++)
       {
            s+=a[i];
       }
       return s;
}



int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
       {

        cin>>a[i];
       }
        int t=sum(a,n);
cout<<t;
return 0;

}

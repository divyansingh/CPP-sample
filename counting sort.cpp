#include<iostream>
using namespace std;
int main()
{
    long n; cin>>n;
    long a[n],cnt[100]={0},c=0;
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)
    {
                cout<<" cnt "<<cnt[a[i]];


                cnt[a[i]]++;
                cout<<" cnt "<<cnt[a[i]]<<" i "<<i;

    cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
            cout<<i<<" i "<<endl;
            for(int j=0;j<cnt[i];j++,c++)
            {
                a[c]=i;
                cout<<a[c]<<" a[c] "<<endl;
            }
    }
   for(int i=0;i<n;i++)    cout<<a[i]<<" ";

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a[7]={21,95,64,93,15,39,69};
    int n=7;
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";//element before the cursor gets sorted
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        int j,temp=a[i];
        for( j=i;j>0;j--)
        {
            if(a[j-1]<temp)     break;
            else a[j]=a[j-1];

        }
         a[j]=temp;
    }
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";

}

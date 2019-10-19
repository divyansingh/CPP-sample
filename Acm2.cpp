#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        if(n==1)
        {
            cout<<a[0]<<endl;
            continue;
        }

        int fs=0,ls=0;
        for(int i=0;i<n;i++)
        {

            if(a[i]<=k)
            fs+=a[i];
            else
            fs+=k;
        }
        for(int i=0;i<n-2;i++)
		{
			if(a[i]>k)
			ls+=a[i]-k;
		}
        int l=0,sl=0;
        if (a[n - 2] > k)
            sl = a[n - 2] - k;
        if (a[n - 1] > k)
            l = a[n - 1] - k;
        if (ls < sl)
            fs += l-sl+ ls;
        else if ((ls + sl) % 2 == 1)
            fs += l - 1;
        else
            fs += l;

        cout<<fs<<endl;



    }






}

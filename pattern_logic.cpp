#include<iostream>
using namespace std;

int main()
{
	int n=21, hn=n/2+1,a,b;

	for (int i=1; i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (i>hn) a=n-i+1; else a=i;
			if (j>hn) b=n-j+1; else b=j;

			//if (j==hn-i+1)
			//if (b==hn-a+1)
			//if (b<hn-a+1)
			//if (b<=hn-a+1)
			//if (b>hn-a+1)
			if (b>=hn-a+1)
			//if(a==b)
			{
				cout<<"*"<<' ';
			}
			else
			{
				cout<<"."<<' ';
			}
		}
		cout << '\n';
	}
	return 0;
}

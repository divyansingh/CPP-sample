#include<iostream>
using namespace std;
int main()
{
	int a[100],n,sum,count=0;;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the sum:\n";
	cin>>sum;

	for(int  i=0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(a[i]+a[j]==sum)  {
                    cout<<a[i]<< "  "<<a[j]<<endl;
                    count=1;

                    }
        }
	}
	if(count == 0)
	cout<<"-1"<<endl;
	return 0;
}

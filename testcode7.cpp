#include <bits/stdc++.h>
using namespace std;
bool prime[1000000000];
void ppm( bool prime[]){
	 memset(prime, true, sizeof(prime));
        for (long p=2; p*p<=1000000000; p++)
	    {
		    if (prime[p] == true)
		    {
			    for (long i=p*2; i<=1000000000; i += p)
				    prime[i] = false;
		    }
	    }
}
void SieveOfEratosthenes(long in,long n)
{

    for (long p=in; p<=n; p++)
	if (prime[p])
		cout << p <<endl;
		cout<<endl;
}


int main()
{
	long t;  cin>>t;
	for(long i=0;i<t;i++){
	    int in,n;   cin>>in>>n;
	    SieveOfEratosthenes(in,n);
	}

	return 0;
}

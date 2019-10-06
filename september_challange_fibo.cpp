#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MAX = 100000000;
ll f[MAX] = {0};
ll fmodi[MAX];
ll fib(ll n)
{

    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);

    if (f[n])
        return f[n];

    int k = (n & 1)? (n+1)/2 : n/2;

    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);

    return f[n];
}
ll getValue(ll ne)
{

    return pow(2,floor(log2(ne))) - 1;
}
void Fmod10(){
	for(int i=0;i<=60;i++) fmodi[i]=fib(i)%10;
}

ll n;
void solve()
{
	cin >> n;
    n=getValue(n);
    if(n == 0)
	{
		cout << 0 << "\n";
		return;
	}
	n%=60;

	cout <<fmodi[n]<< "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	Fmod10();
	while(t--)
		solve();
	return 0;
}

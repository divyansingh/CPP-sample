#include<iostream>
using namespace std;

void oddeven(int n)
{
    int d=10,sume=0,sumo=0;
    while(n>0)
    {
        int t;
        t=n%d;
        n/=d;
        d*=10;
        if(t%2==0)      sume+=t;    else sumo+=t;
    }
    if((sume%4==0||sumo%3==0))  cout<<"Yes"<<endl;  else cout<<"No"<<endl;


}
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      int k;
      cin>>k;
      oddeven(k);
  }
  return 0;
}

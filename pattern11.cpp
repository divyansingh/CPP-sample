#include <iostream>
using namespace std;
int main()
{
  int i,j,k;
  for(i=1;i<=5;i++)
  {
      for(j=i;j>=1;j--)
      {
          if(j%2==0)
          {
              cout<<"0"<<" ";

          }
          else
          {
              cout<<"1"<<" ";
          }
      }
      cout<<endl;
  }
  return 0;

}

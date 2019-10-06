#include<iostream>
using namespace std;

bool check(char a[],char b[])
{
  long k=0,t=0;
   for(int i=0;a[i]!='\0';i++)
    {   t++;
        for(long j=0;b[j]='\0';j++)
        {
            if(a[i]==b[j])
                k++;
        }
    }
    if(k<t-1)  return true;
    else return false;
}


int main()
{
    char str[10000],str1[10000];
    cin.getline(str,10000);
    cin.getline(str1,10000);
    if(check(str,str1))     cout<<"YES";
    else cout<<"No";

    return 0;
}

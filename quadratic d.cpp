#include<iostream>
#include<math.h>
using namespace std;
char quadratic(int a,int b,int c)
{
    float x1,x2;
    float d=b*b-4*a*c;


      if(d>0)
        {
                return 'r';



        }
        else    if(d<0)  {  return 'i';}
        else    if(d==0)   {


                            return 'e';

                            }

}
int main()
{
    int a,b,c;


    cin>>a>>b>>c;
    char f= quadratic(a,b,c);
    cout<<f<<endl;
    switch(f)
    {
        case
    }
    return 0;
}

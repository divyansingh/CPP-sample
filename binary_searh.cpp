#include<iostream>
using namespace std;
int main()
{
   int a[10]={1,3,3,3,3,5,6,7,9,10};
   int n=11,key;
   cin>>key;

   int s,e,m;
   s=0,e=n-1;
   while(s<=e)
   {
       m=(s+e)/2;
       if(a[m]==key)
       {
           cout<<"no found at index: "<<m;
           return 0;
       }
       if(a[m]<key)     s=m+1;
       else     e=m-1;


   }
   if(s>e)  cout<<"no not found";
   return 0;

}

#include <iostream>
using namespace std;
bool ispermutation(char a[],char b[],int c[],int s){
    if(a[s]=='\0')  {
      if(b[s]!='\0')     return false;
      for(int i=0;i<s;i++)  if(a[i]!=0)  return false;
      else return true;;
    }
    c[a[s]-'a']++;
    c[b[s]-'a']--;
    return ispermutation(a,b,c,s+1);
}
void print(bool t){
    if(t)   cout<<"Yes"<<endl;
    else    cout<<"No"<<endl;
}

int main()
{
   int n;   cin>>n;
   for(int i=1;i<=n;i++){
       int c[26]={0};
       char a[100],b[100];
       cin.getline(a,100);
       cin.getline(b,100);
       print(ispermutation(a,b,c,0));
   }
    return 0;
}

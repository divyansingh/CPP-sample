#include<iostream>
using namespace std;
int slenght( char str[])
{
    int length=0;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}
void append(char a[],char b[])
{
    int l=slenght(a);
    int i;
   // a[l]=' ';
    for( i=0;b[i]!='\0';i++)
    {
        a[l+i]=b[i];
    }
    a[l+i]='\0';
}
int main()
{
    char str[100],str1[100];
    cin.getline(str,100);
    cin.getline(str1,100);
    append(str,str1);
    cout<<str<<endl;
    cout<<str1<<endl;
    return 0;
}

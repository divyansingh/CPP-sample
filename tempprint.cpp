#include <bits/stdc++.h> using namespace std; int main()
{
ofstreamoutfile;   ifstreaminfile;     char fname1[10], fname2[10];     char ch;     cout<<"enter a file name to be copied?\n";     cin>>fname1;     cout<<"new file name?\n";     cin>>fname2;     infile.open(fname1);     outfile.open(fname2);
    while(!infile.eof())
{  ch = infile.get();         if(ch==' ' || ch=='\t' || ch=='\n')
{             continue;
}         else
{  outfile.put(ch);
   }
}
}

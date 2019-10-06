#include<iostream>
using namespace std;
bool compare(char ch[],char k[])
{
    int i;
    for( i=0;(ch[i]!='\0')&&(k[i]!='\0');i++){
      if(ch[i]!=k[i])
        return false;
    }

    if((k[i]=='\0')&&(ch[i]=='\0'))     return true;
    else return false;

}
int main(){
    int n;cin>>n;
    char ch[10][100];
    for(int i=0;i<=n;i++){
            cin.getline(ch[i],100);
    }

    cout<<"enter"<<endl;
    char k[100];
    cin.getline(k,100);
    for(int i=0;i<=n;i++){

        if(compare(ch[i],k)){
                cout<<ch[i];
                cout<<" exist at  :"<<i;
                return 0;
                }
    }
    cout<<" does not exist";
    return 0;
}

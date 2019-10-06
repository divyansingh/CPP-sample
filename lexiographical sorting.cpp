#include<iostream>
using namespace std;
bool compare(char c[],char b[]){
    for(int i=0;true;i++){
            if(b[i]=='\0') {return false;break;}
            else
            if(c[i]>b[i])
            {
                return false;
                break;
            }
        }
    return true;


}
int main(){
        int n;  cin>>n;
        char a[1000][1000];
        for(int i=0;i<=n;i++)    cin.getline(a[i],1000);
        for(int i=0;i<=n;i++)    cout<<a[i]<<endl;

}

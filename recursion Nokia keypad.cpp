#include<iostream>
#include<cstring>
using namespace std;
char keypad[10][10]={"","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
void nokia(char a[],int s,string o[],int p){
    int cnt;
    if(a[s]=='\0')  {
        o[p]='\0';
        cnt++;
        o[p]=" ";
        cnt+=1;
        return ;
    }

    for(int i=0;keypad[a[s]-'0'][i]!='\0';i++){
        o[p]=keypad[a[s]-'0'][i];

        nokia(a,s+1,o,p+1);
        }

}
int main(){
    int cnt=0;
    char a[100];
    string o[100];
    cin.getline(a,100);
    nokia(a,0,o,0);
    cout<<o;
  //  for(int i=0;i<o.length();i++)   cout<<o[i];

    return 0;
}

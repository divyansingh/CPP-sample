#include <iostream>
using namespace std;
void numofword(char str[], int s, int &k){
    if (str[s]=='\0'){ k++ ; return;}
    if (str[s]=='0') return;
    numofword(str,s+1,k);
    if (str[s+1]!='\0'){
        int n=10*(str[s]-'0')+(str[s+1]-'0');
            if (n<=26) numofword(str,s+2,k);
    }
}

int main(){
    int t; cin>>t;
    for(int i=1;i<=t;i++){
    char str[1000];
    cin>>str;
    int k=0;
    numofword (str,0,k);
    cout<<k+1<<endl;
    }

}

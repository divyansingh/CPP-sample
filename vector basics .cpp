
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i;  cin>>n;
    vector <int> v;
    for( i=0;i<n;i++)
        {
            int n1;
            cin>>n1;
            v.push_back(n1);

        }
        for( i=0;i<v.size();i++)    cout<<v[i]<<" ";
        cout<<endl<<"enter"<<endl;
        int f;  cin>>f;
        for( i=0;i<n;i++)
            if(v[i]==f) {
                    cout<<"found at "<<i<<" position";
                    return 0;
            }

            if(i==n)    cout<<"not found";


    return 0;
}

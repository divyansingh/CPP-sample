#include<iostream>
#include<map>         ///stl for executing hashing or unorderd_map for c++ 11
using namespace std;
int main(){
    map<string ,int> mymap; ///or unorderd_map for c++
    ///insert values to map...
    mymap["Apple"]=100;
    mymap["Orange"]=50;
    mymap["Mango"]=400;
    pair<string,int >p("Pineapple",90);
    mymap.insert(p);
    string myfruit="Mango";
    if(mymap.count(myfruit)>0)    cout<<mymap[myfruit];
    else cout<<"Fruit not found";


}

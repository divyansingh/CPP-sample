#include<iostream>
#include<queue>
using namespace std;
class mycompare{
public:
    bool operator()(pair<int,string>a,pair<int,string>b){
        return a.first>b.first;             ///returns 1 if a is greater than b else return 0...
    }
};
int main(){
    ///pair is a template class which can store two diff or same data types...
    /*pair<int,string> ii;
    ii.first=1;
    ii.second="hello";
    cout<<ii.first;
    cout<<ii.second;*/
    ///prepairing print prioty queue...
    pair <int,string> p1,p2,p3,p4,p5;
    p1.first=1; p1.second=" job pehla ";
    p2.first=2; p2.second=" job dusra ";
    p3.first=3; p3.second=" job three ";
    p4.first=4; p4.second=" job four ";
    p5.first=5; p5.second=" job panchva ";
    priority_queue<pair<int,string>,vector<pair<int,string> >,mycompare> pq1;
    pq1.push(p2);
    pq1.push(p4);
    pq1.push(p5);
    pq1.push(p3);
    pq1.push(p1);
    while(!pq1.empty()){
    cout<<pq1.top().second<<endl;
    pq1.pop();}


}

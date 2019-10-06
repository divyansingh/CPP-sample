#include<iostream>	
#include<list>
#include<queue>
using namespace std;
typedef pair <int ,int> ii;
typedef list <ii>::iterator lit;
class comp{
public:
	 bool operator()  (const ii &a, const ii &b){
	 	return a.second>b.second;
	 }
};
class graph{
private:
	list <ii> *adjlist;
	int nV;
public:
	graph (int n){
		nV=n;
		adjlist= new list <ii>[nV+1];
	}
	addEdge (int src, int dest,int wt){
		adjlist[src].push_back(make_pair(dest,wt));
	}

    int djkistra(int src,int dest){
	priority_queue < ii , vector<ii>,comp> pq;
	int *dist=new int (nV+1);
	for(int i=0;i<=nV;i++)	dist[i]=100000;
	dist[src]=0;
	pq.push(make_pair(src,0));
	while(!pq.empty()){
		ii cur = pq.top();
		pq.pop();
		int curVer=cur.first;
		int curWt = cur.second;
		if(dist[curVer]<curWt)	continue;

		dist[curVer]=curWt;
		for(lit it=adjlist[curVer].begin(); it!=adjlist[curVer].end(); it++){
			ii n=*it;
			int childDist=dist[curVer]+n.second;
			if(childDist>dist[n.first])		continue;
			pq.push(make_pair(n.first,childDist));
            }
        }
		//all dist are updated
        for(int i=1;i<=nV;i++)	cout<<i<<" - "<<dist[i]<<endl;
		int ans=dist[dest];
		delete [] dist;
		return ans;
    }
};
int main(){
	graph G(7);
	G.addEdge(1,2,10);
	G.addEdge(1,3,80);
	G.addEdge(2,3,6);
	G.addEdge(3,4,70);
	G.addEdge(2,5,20);
	G.addEdge(5,6,50);
	G.addEdge(5,7,10);
	G.addEdge(7,6,5);
	cout<<G.djkistra(1,7);
}

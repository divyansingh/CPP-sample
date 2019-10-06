#include<iostream>
#include<list>
#include<queue>
using namespace std;
class graph{
private:
	int V;
	list <int> *l;
public:
	graph(int vertices){
		V=vertices;
		l=new list <int>[V];
	}
	void addEdge(int u,int v,bool bidir =true){
		l[u].push_back(v);
		if(bidir)	l[v].push_back(u);
	}
	void PrintAdjList(){
		for(int i=0;i<V;i++){
			cout<<i<<" --> ";
			for(auto it=l[i].begin();it!=l[i].end();it++){
                        cout<<*it<<" , ";
                    }
            cout<<endl;
            }
	}
	void BFS(int s){
		bool *visited=new bool [V];
		for(int i=0;i<V;i++)	visited[i]=false;
			queue<int>	q;
		q.push(s);
		visited[s]=true;
		while(!q.empty()){
			int f=q.front();
			cout<<f<<" ";
			q.pop();
			for( auto it=l[f].begin();it!=l[f].end();it++){
				if(visited[*it]==false){
					q.push(*it);
                    visited[*it]=true;
                }
			}
		}
	}
	void DFSrecur(int node,bool *visited){
		cout<<node<<" ";
		visited[node]=true;
		for(auto it=l[node].begin();it!=l[node].end();it++){
			if(visited[*it]==false){
				DFSrecur(*it,visited);
			}
		}
    }
    void DFS(int s){
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)	visited[i]=false;
    	DFSrecur(s,visited);
        cout<<endl;
    }


	void BFSPath(int s,int d){
		int *distance=new int[V];
        int *distanceParent=new int[V];
		for(int i=0;i<V;i++)
        {
            distance[i]=-1;
            distanceParent[i]=-1;
			queue<int> q;
			q.push(s);
			distance[s]++;
			while(!q.empty()){
				int f=q.front();
				cout<<f<<" " <<distance[f]<<endl;
				q.pop();
				for(auto it=l[f].begin();it!=l[f].end();it++){

					if(distance[*it]==-1){
						q.push(*it);

						distance[*it]+=distance[f]+1;
						distanceParent[*it]=f;
						}
                    }
                }
			}
			cout<<"Output-dISTANE OF destination is "<<distance[d]<<endl;
			cout<<"Path is : ";
			int p=distanceParent[d];
			while(p!=-1){
                    cout<<p<<" <-- ";
                    p=distanceParent[p];
			}
	}
	void DFSallcomp(){
		bool *visited=new bool[V];
		for(int i=0;i<V;i++)	visited[i]=false;
		int component=0;
		for(int i=0;i<V;i++){
			if(visited[i]==false){
				component++;
				cout<<" ~Component~ "<<component<<" : ";
				DFSrecur(i,visited);
			}
		}
	}
};
int main(){
    /*int Board[37];
    for(int i=0;i<=36;i++)  Board[i]=i;
    Board[2]=15;
    Board[25]=35;
    Board[34]=12;
    Board[32]=30;
    Board[24]=16;
    Board[20]=6;
    Board[17]=4;
    graph G(37);
    for(int i=0;i<=36;i++){
    	for(int j=0;j<=36;j++){
    		int dest=i+j;
    		if(dest<=36){
                    dest=Board[dest];
    			G.addEdge(i,dest,false);
    		}
    	}
    }
    G.BFSPath(1,36);


    graph G(6);
    G.addEdge(0,1);
    G.addEdge(0,2);
    G.addEdge(0,3);
    G.addEdge(1,3);
    G.addEdge(2,3);
    G.addEdge(3,4);
    G.addEdge(4,5);
    G.PrintAdjList();
    cout<<endl;
    G.BFS(0);
    cout<<endl;
    G.BFS(4);
    G.BFSPath(1,2);
    cout<<endl;
    G.DFS(0);
    cout<<endl;
    G.DFS(2);*/
    graph G(13);
    G.addEdge(0,1);
    G.addEdge(0,2);
    G.addEdge(0,3);
    G.addEdge(1,3);
    G.addEdge(2,3);
    G.addEdge(3,4);
    G.addEdge(4,5);
    G.addEdge(6,8);
    G.addEdge(6,7);
    G.addEdge(9,10);
    G.addEdge(10,11);
    G.addEdge(10,12);
    G.PrintAdjList();
    cout<<endl;
    G.BFS(0);
    cout<<endl;
    G.BFS(4);
    G.BFSPath(1,2);
    cout<<endl;
    G.DFS(0);
    cout<<endl;
    G.DFS(2);
    cout<<endl;
    G.DFSallcomp();
}


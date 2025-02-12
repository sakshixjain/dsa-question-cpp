#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;


class graph{
public:
 
 unordered_map<int, list<int>>adj;

 void addEdge(int u, int v, bool direction){
    // direc = 0-> undirected
    // direc = 1-> directed 

    // create an edge fron u to v

    adj[u].push_back(v);
    if(direction ==0){
        adj[v].push_back(u);
    }
 }

 void printAdjList(){
        for(auto i: adj){
            cout<<i.first<<"->";
            for(auto entry: i.second){
                cout<<entry<<",";
            }
            cout<<endl;
        }
 }
};
int main(){
int n;
cout<<"Enter the number of nodes in the graph: ";
cin>>n;

int m;
cout<<"Enter the number of edges in the graph: ";
cin>>m;
 graph g;
 
for(int i=0; i<m; i++){
    int u,v;
    cout<<"Enter the edge: ";
    cin>>u>>v;
   
    g.addEdge(u,v,0);
    
}
g.printAdjList();
    return 0;
}
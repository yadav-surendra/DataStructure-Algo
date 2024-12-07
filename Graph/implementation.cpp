#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph {
    unordered_map<int, list<int>> adj;

    public:
     void addEdge(int u, int v, bool direction)
     {
        adj[u].push_back(v);

        // direction = 0  => undirected graph
        // direction = 1 => directed graph
        if(direction == 0)
        {
            adj[v].push_back(u);
        }
     }

     // function to print graph
     void printEdges()
     {
        for(auto i: adj)
        {
            cout<<i.first<<"-> ";
            for(auto j: i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
     }

};


int main()
{
    graph g;

    int n,m;
    cout<<"Enter the number of nodes and edges:"<<endl;
    cin>>n>>m;

    g.addEdge(n,m,0);

    g.printEdges();

    return 0;
}
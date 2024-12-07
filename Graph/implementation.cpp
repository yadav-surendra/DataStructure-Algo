#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

template <typename T>
class graph {
    unordered_map< T , list<T>> adj;

    public:
     void addEdge(T u, T v, bool direction)
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
    graph<int> g;

    int n,m;
    cout<<"Enter the number of nodes and edges:"<<endl;
    cin>>n>>m;

    // give data for edges 
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin >> u>> v;

        g.addEdge(u,v,0);
    }

    // printing the edges
    cout<<"Printing the graph"<<endl;
    g.printEdges();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << v;
        for (int i = 0; i < adj[v].size(); i++)
            cout << " -> " << adj[v][i];
        printf("\n");
    }
} // Driver code
int main()
{
    int V, a, b;
    cin >> V;
    int E, c;
    cin >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++)
    {
        cin >> a >> b;
        addEdge(adj, a, b);
    }
    printGraph(adj, V);
    return 0;
}
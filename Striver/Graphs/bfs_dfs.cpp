#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Graph
{
  int V;
  vector<vector<int>> adj;

public:
  Graph(int V);
  void addEdge(int v, int w);
  void DFS(int s);
  void DFSUtil(int s, vector<bool> &visited);
  void BFS(int s);
};

Graph::Graph(int V)
{
  this->V = V;
  adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
  adj[v].push_back(w);
  adj[w].push_back(v); // Assuming an undirected graph
}

void Graph::DFSUtil(int s, vector<bool> &visited)
{
  visited[s] = true;
  cout << s << " ";

  for (int neighbor : adj[s])
  {
    if (!visited[neighbor])
    {
      DFSUtil(neighbor, visited);
    }
  }
}

void Graph::DFS(int s)
{
  vector<bool> visited(V, false);
  DFSUtil(s, visited);
}

void Graph::BFS(int s)
{
  vector<bool> visited(V, false);
  queue<int> q;

  visited[s] = true;
  q.push(s);

  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    cout << node << " ";

    for (int neighbor : adj[node])
    {
      if (!visited[neighbor])
      {
        visited[neighbor] = true;
        q.push(neighbor);
      }
    }
  }
}

int main()
{
  Graph g(6);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 3);
  g.addEdge(2, 4);
  g.addEdge(3, 5);

  cout << "DFS starting from node 0:" << endl;
  g.DFS(0);

  return 0;
}

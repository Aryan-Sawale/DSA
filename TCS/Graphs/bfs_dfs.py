from collections import deque


class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.adj = [[] for _ in range(vertices)]

    def add_edge(self, v, w):
        self.adj[v].append(w)
        self.adj[w].append(v)  # Assuming an undirected graph

    def BFS(self, s):
        visited = [False] * self.V
        queue = deque([s])
        visited[s] = True

        while queue:
            node = queue.popleft()
            print(node, end=" ")

            for neighbor in self.adj[node]:
                if not visited[neighbor]:
                    queue.append(neighbor)
                    visited[neighbor] = True

    def DFSUtil(self, v, visited):
        # Mark the current node as visited and print it
        visited[v] = True
        print(v, end=" ")

        # Recur for all the vertices adjacent to this vertex
        for neighbor in self.adj[v]:
            if not visited[neighbor]:
                self.DFSUtil(neighbor, visited)

    def DFS(self, v):
        # Mark all the vertices as not visited
        visited = [False] * self.V

        # Call the recursive helper function to print DFS traversal
        self.DFSUtil(v, visited)


# Example usage
if __name__ == "__main__":
    g = Graph(6)
    g.add_edge(0, 1)
    g.add_edge(0, 2)
    g.add_edge(1, 3)
    g.add_edge(2, 4)
    g.add_edge(3, 5)

    print("BFS starting from node 0:")
    g.BFS(0)

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

    def DFS(self, s):
        visited = [False] * self.V
        stack = [s]

        while stack:
            node = stack.pop()
            if not visited[node]:
                print(node, end=" ")
                visited[node] = True

                for neighbor in reversed(self.adj[node]):
                    if not visited[neighbor]:
                        stack.append(neighbor)


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

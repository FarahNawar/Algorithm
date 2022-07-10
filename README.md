### Blog & Sites
- https://tanvir002700.wordpress.com/
- https://www.shafaetsplanet.com/
- https://sites.google.com/site/smilitude/
- https://bappyscpworld.blogspot.com/
- https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/tutorial/
- https://www.tushers.com/


### Others
Proposition logic : De Morgan’s law: '(P and Q)' is logically equivalent to 'not (not P or not Q)'.

### Graph

#### Graph Type
- Directed - Undirected
- Weighted - Unweighted
- Complete Graph :
   - a complete graph is a simple undirected graph in which every pair of distinct vertices is connected by a unique edge
Edges = n(n-1)/2
- Regular Graph
- Bipartite Graph
- Complete Bipartite Graph
- Subgraph

#### Terms
- Node
- Edge
- Path : sequence of edges, Shortest Path
- Degree : Indegree , Out degree
- Handshaking lemma 
  - in every finite undirected graph, the number of vertices that touch an odd number of edges is even.

#### Representation
- Adjacency list
- Adjacency matrix

#### Graph traversal

Graph traversal means visiting every vertex and edge exactly once in a well-defined order.

It includes 
- Visiting a vertex
- Explorating a vertex

#### Traversing Algorithm
- BFS
  - Finds shortest path to go from one node to another node
  - Only works for unweighted graph
  - BFS tree
  - Queue FIFO
- DFS
  - Backedge
  - Treeedge
  - DFS tree
  - http://www.shafaetsplanet.com/?p=973
  - Stack LIFO

#### Check whether a given graph is Bipartite or not
- Bipartite Graph : https://www.javatpoint.com/regular-and-bipartite-graphs
  - Can be solved using BFS 

#### Shortest Path Algorithm
- BFS ( for unweighted)
- Bellman Ford
- Dijkstra
  - Path relaxation
  - Works both on directed and undirected graph as long as the weight is non negative number
- Floyed Warshal 

#### Spanning Tree
- http://www.shafaetsplanet.com/?p=692
- Greedy approach

- Prims algorithm :  O(ElogV)
- Kruskal algorithm

#### Topological Sort
- Scheduling task

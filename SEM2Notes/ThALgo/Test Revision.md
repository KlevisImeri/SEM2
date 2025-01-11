$f(n)∈O(g(n))~~~\exists c,n_0~~s.t~~f(n)\leq g(n)~~\forall n\geq n_0$ 
$f(n)∈ Ω(g(n))~~~\exists c,n_0~~s.t~~f(n)\geq g(n)~~\forall n\geq n_0$ 
$f(n)∈ Θ(g(n))=~~~f(n)∈ Ω(g(n)~~and~~f(n)∈O(g(n))$

The way to disprove $\leq cn^2$

Selection sort (find min and sent it to the beginning every time) $O(n^2)$
Mergesort (use merge funtion and recursively call) $O(n\log n)$

DFS(G) DFS-VISIT(G,s):
Verteces:
Discovery
Finished
Parent

You can use BFS-VISIT(G,s) to find shortest path with weights = 1.

DAG-SHORTEST-PATH(G,s)
DFS Table:
Updatign Table;
Vertex, Edges from Vertex, Value at verteces
Topological order
Resuting:
Topological order
v.t
v.T
![[Pasted image 20230416224228.png]]

DIJKSTRA(G,s)
Table of updating edges
Table with final shortest distances and parent
![[Pasted image 20230416224320.png]]



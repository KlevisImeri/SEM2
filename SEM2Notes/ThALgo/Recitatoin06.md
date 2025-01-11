### 1
a)
![[Pasted image 20230408203350.png|300]]
b)
b: b-c | b-d
f:  f-b
c: c-a|c-d
d: d-e

### 2
Algo:
$\forall v \in V(F)$ you run a modified Dijkstra's Algo starting from v.
Modified Dijkstra's Algo:
1. Start from $v_i\in V(F)$ 
2. If you reach another $v_j\in V(F)$ you discover it through relaxing the vertex which has an outgoing edge to $v_j$. You dont run RELAX in $v_j$ itself. Than you go to the next min vertex which is not in F.
3. You have all the shortest paths $v_i\to v_n$ 

Runing time:
We run Dijkstra's Algo $\forall v \in V(F)\implies O(|V|^2|F|)$.

### 3

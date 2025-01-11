## Binds
>$\renewcommand{\comp}[1]{\overline{#1}}$
>$\newcommand\col[1]{\begin{pmatrix}#1\end{pmatrix}}$

---

## 1
### Def'n of Graph
>$G~~~triple:$
>$1.~~V(G)~-~~vertex~~set$
>$2.~~E(G)~-~~ edge~set$
>$3.~~Endpoints~-~~relation~~V(G),E(G)$

### Def'n of Complement
>$\comp G$ :
>$1.~~V(G)~-~~vertex~~set$
>$2.3.~uv\in E(\comp G)\iff uv\not\in E(G)$

### Def'n of Clique, Independent set
>Clique set - pairwise adjacent vertices
>Independent set - if pairwise noadjacnet vertices
>$G \rightarrow \comp G$ reverses them

### Def'n of disjoint, loops, multiple edges
> Disjoint edges  = different endpoints
> Loops edge = same endpoints (vv)
> Multiple edges = same edpoints (uv) (uv)

### Def'n of simple G
> No loops or multiple edges

### Def'n of a bipartite G and partite sets
>$V(G)=inde.set1~~\cup~~inde.set2$ 
>inde.set = parite set

### Def'n chromatic number $\chi (G)$, k-partite
> $\chi (G) := min($color so u $\longleftrightarrow$ v have different color)
> $V(G)=inde.set1~~\cup~~inde.set2 ...~~\cup~~inde.setk:=$ G k-partite
> $\chi (G) = k$

### Def'n path, loop
>path := $G~~u\longleftrightarrow v \iff consecutive$ 
>cylcle := $G~~V(G) = E(G)$  path

### Def'n connected, disconnected G
> connected = $\forall$ vertices belong to a path
> diconnected = you can't find a path which contains all the vertices 

### Def'n Subgrapth
> $H := subgrapth~of~G := H\subseteq G$ 
> $1.~~V(H)\subseteq V(G)$
> $2.~~E(H)\subseteq E(G)$ 
> $3.~~endpoints(H)=endpoints(G)$

### Def'n incidence & degree of vertex (loopless grapth)
>$vu \in endpoints~~e\iff$v,u and e incident
>degree(v) = num(incident e's)

### Def'n Adjacency | Incidence  matrix of G(*lopless*)
> ![[Pasted image 20230124174954.png]]
> degree(v) = sum of row

### Def'n Isomorphism
>$G := s.p~~~~ H:= s.p$
>$Bijection~~f : V(G),E(G) \longleftrightarrow V(H),E(H)~~s.t~~\forall uv \in E(G)\iff f(u)f(v) \in E(H):= G≅H$

### Isomorphism  = equivalence relation 
>Isomorphism is an  equivalence relation on set of G (simple graphs)

Proof:
*Refexive property* - $G≅G$
Identiy permutation

*Symetric property* - $G≅H\implies H≅G$           
$f~,~f^{-1}$ are isomorphisms    
$uv \in E(G)\iff f(u)f(v) \in E(H)~~~~~\iff~~~~~xy \in E(H)\iff f^{-1}(x)f^{-1}(y) \in E(G)$ 

*Transitive property* - $F≅G~~~G≅H\implies F≅H$     
$F≅G~~~G≅H\implies f: V(F)\rightarrow V(G)~~~~~~g: V(G)\rightarrow V(H)~~~~isomorphisms\implies$
$uv \in E(F)\iff f(u)f(v) \in E(G)~~~~~~~xy \in E(G)\iff f(x)f(y) \in E(H)\implies$ 
$\exists uv \in E(F)~~s.t~~f(u)=x~~~f(v)=y~~~xy\in E(G)\implies$
$uv \in E(F)\iff g(f(u))g(f(v))\in E(H)\implies F≅H$ 

### Isomorphism class
>Isomorphism class of graphs is an equivalence class (a set) of graphs under the isomophism relation.

### $P_n$ | $C_n$ | $K_n$ | $K_{r,s}$
>$P_n$ - (unlabeled) path with n vertices
>$C_N$ - (unlabeled) cycle with n vertices
>$K_n$ - complete grapth, n vertices pariwise adjacent
>$K_{r,s}$ - complete biparte graph (biclique), vertices adjecent $\iff$ in deiffretn partire sets
>![[Pasted image 20230124192138.png]]

### The number of n-vertex grapths
> $2^{\col{n\\2}}$

Proof:
The number of edges = $n(n-1)/2=\col{n\\2}$=how many ways can we choose 2 vertexes from the n-vertexes where order matters (2 vertexes make an edge)
$2^{\col{n\\2}}$ = for each 2 vertex combiation there can be or can not be and edge = 2 options

### Self-complementary & decompostion
>  $G≅\comp G:=self-complementary$
>  Decomposition = a list of subgraphs s.t each edge is only in one of the subgraphs
>  $H$ = self-complementary $\iff$ $K_n$ has a decomposition consisting of 2 copies of $H$ 

![[Pasted image 20230124221804.png]]

### Petersen Graph
> ![[Pasted image 20230127220753.png]]

### Proposition one common neighbor
> If tiwo vertices are nonadjacent in Petersen grath then they have exacly one common neighbor

Proof:
     1     2            4
1   1/1  1/2  1/3  1/4  1/5
2   2/1  2/2  2/3  2/4  2/5
    3/1  3/1  3/3  3/4  35
4   4/1  4/2  4/3  4/4  4/5
    5/1  5/2  5/3  5/4  5/5

Only 3 and 5 row/column aer left $\implies$ we can only pick 34 (one of them)

### Def'n Girth
> Girth := length(min(cycle))
> no cycle $\implies$ girth = $\infty$ 

### Proposition girth 5
> The perterson grapth has girth 5

Proof:
Simple grapth -> no 1/2-cycle
5 colums ->  you can't choose 3 pairwise disjoint 2-sets -> no 3-cycle
![[Pasted image 20230127222758.png|200]] + preposition one comon neighbor -> no 4 cycle
You can easily find a cycle of 5

### Def'n automorphism, vertex-transitive
> automorphism := isomorphism G to G
> G = vertex-transiteve $\forall u,v \in V(G)~~\exists$ automorphism that maps u to v
> vertex-transitivity = "the grapth looks the same from each vertex"
> Peterson grapth is vertex transitive


---
## Tricks
### Decomposition trick
> Decompose H into copies of G, the nubmer of edges of G must divide the number of edges of H.

### 2-degree grapths are cycles
> Every component of  a finite 2-regular grath is a cycle.   See exerciese 1.1.17

### Biparti grapths have only even number of cycles
> C={cycles}, B={biparti grapths}  
> $C \cap B = {C_{2k} : k\geq2}$ 
> if it is odd think about $C_3$ i cant work you need to connect the indepenent groups

### Complement trick
> When you have a big degree and you are chechking for isomorphisim you can the  complemnt because the degree is simplier

### Check for common neighbors
> if you want to check for ismorphism you can also check if the number of neighbors is the same

### Cycles $\leq$ 5 peterson grapth
> Cycles $\leq$ 5 do not exits in a peterson grapth

### Girth $\geq$ 4 no neighbors
> $girth \geq 4~~~xy\in E(G)$ $\implies$ xy common neighbors 

### When you have divisibility check the number of edges
> When the questoin aks if something with divisibility and decompositon of the grapths $\implies$ (n(n-1)/2)/x 



---
## Questions

1. Why does containing odd cycles makes the Peterson grapth not bipartite?
2. 


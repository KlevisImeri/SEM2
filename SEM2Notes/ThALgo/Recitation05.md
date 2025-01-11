### 4
Code:
G is DAG $\implies$ Topological ordering
1. Inicialize all the nubmer of paths $s\to v$ to 0. $s\to s$ to 1
2. We run Shoretest path in DAG but the RELAXING is:
```c
for each v <-> u{
	RELAZING(u,v);
}
RELAZING(u,v){
		v.#Paths += u.#Paths;
	}
```
Correctnes:
Incariant: the number of paths using these verteces $u_1$ to $u_k$.
1. Incialize they are good.
2. Maintanance: when adding a new edge we are updating all the outgoing edges form that vertex. Thefore we update all the paths going through that vertex.
Running Time:
The new Relaxing is constant. So you have the same time as the shortest path in DAG = O(m+n);

### 5
c) You can run the DFS or BFS and get the components(forest).
if each component(ech tree in the forest) has a red veretex we are done.
d) Run DFS and BFS. If you start form a red vertex you just check if you reach a blu vertex and output 1.

### 6
Label acrobats as verteces with atributes height and weight. No you construct the graph. 
```c
for all v in V(G){
	for all u <-> v{
		if(v.weight > u.weight && v.height > u.height){
			connect v -> u;
		}
	}
}
```
As you can see this takes up $O(n^2)$ because of the 2 lops bounded by n.
The grath created is a DAG because:
if $u_i\to u_j$ and $u_j\to u_k$  $\implies$ $u_k \not \to u_i\implies$ thre are no loops.
Not  findin the maximum nuber of people that can stand on a tower is the same as finding the longest path on a DAG which takes $O(n+m)<O(n^2)$. Therefore our algo takes $O(n^2)$. 
b) Just trace back the parent from the end vertex of the longest path.

### 7
Code:
If you run DFS in a normal graph you will get back=front edges and tree edges. You just treat those edges as front edges. Or when you ralax an edge do not relax dicovered verteces. And we are using topological ordering.
Invariace:
The relaxed edges have the shortest path to them.
Start: trivial.
Maintanance: The relaex edges all have the shortest path and there no backward adges going into them so they are not updated anymore + tehre doesnt exits a croos edge $\implies$ they will have the shortest path even if I add one discovered edge.  Because relaxing was done the dicovered edge has the shortest path to it. We can just relax it. This concludes the maintanance.

### 8
Idea1:
You just run a normal DAG but when you reach a pruple vertex and relax it all it neighbors become purpilized. Lets give them a color red. These red color vertex
have all thre freedom except they cannot updata (when relaxing) the adacent edges that are purple. So they the purple vertex can update them but the red one cant update the purpel vertex because that means you are using a path with 2 purple vertex.
Prove: It doesnt work
![[Pasted image 20230408110546.png|300]]

Idea2:
You keep track of colors in each vertex in 2 modes. One as the red mentioned above ore one as the unperpelized (as colorles) So our model becomes:
![[Pasted image 20230408111518.png|300]]
Prove:
If we want to add a new vertex to our Relaxed verteces which are in topological order, because we have a dag it is either relaxed purpulized or relaxed colorles. Now  when we relax this vertex we check every every posible path to the next group of verteses of the Paths this vertex belongs to.

Time: $O(n+m)$ you can just keep track of the colors in the adjecency list.

Note: 
It think this problem has the same correlation as recitation04|12 exercise. But I never found how to solve that exercise by only changing the grapth before using the algorithm. 

### 9
Idea1: (bad)
If we only had one disk we would have the knapsack problem. But because we have 2 disks we will have the knapsack problem with 2 bags of the same size. But the order of the first files is fixed and we only have one parameter which we are maximizing. So this is wrong.

idea2: (medium)
Each of the files is eaither in the disk one or disk 2...

Idea1+: (good)
I come back at dynamic programin. Let `dp[i][j][k]` be the maximum number of files that can be stored using the first i files, with j units of space used on the first disk and k units of space used on the second disk. The answer to the problem will be `dp[n][L][L]`, which represents the maximum number of files that can be stored using both disks. And then you can use the cases to solve. The problem is that it the running time is $O(nL^2)$ and not $O(L^2)$. To keep the oder fixed
we always need to put the file in one of the disks.

idea2+: (good)
Building a grapth such that (i, j) are nodes where i is the space filled in disk 1 and j is the space filled in disk 2. When you add edges between nodes (i, j) and (i + hi, j) and between nodes (i, j) and (i, j + hi) if these nodes are within the limits of the disks or in other words i+hi < L and j+hi < L. The problem is that if hi = 1 than we will need $2^{nL}$ nodes so than running any algo in it is way beyond $O(L^2)$.

idea1++: (it broke down at time complexity)
But maybe the running time is not $O(nL^2)$ because we do not check tht cases of when we cant put the new file in. So:
Subproblem: Let `dp[i][j][k]`  = # of files used 
i = using the first i files;  j = space of disk 1; k=space of disk 2;
Order:  i= 0 -> n.
Start: i = 0  j = 0 and k=0;
Continue: `dp[i][j][k]` =
1. `dp[i][j][k]=dp[i-1][j][k]`   if you cant fit the file; //revmove this part
2. `dp[i][j][k]=max(dp[i-1][j][k], dp[i-1][j-hi][k] + 1)`  if it fits only in the firt disk... 
very hard it should be easier.

Idea2++: (solution)
I was wrong the maximum number of nodes are $L^2$ because $(i, j)$ all possibilites of i are L and j are L so $L^2$. So we build the grapth:

```C
M[L^2]; //it thge vertex is done
F[N]; //the lengths
build((i,j), h){
	if (M[(i,j)] = 1) {
		return dicoverd;
	}
	V(G) += (i,j);
	if (i+h < L){
		if(build((i+h, j),F[k+1])=!discoverd){
			E(G)+=(i,j)->(i+h, j)
		}
	}
	if (j+h < L){
		if(build((i, j+h),F[k+1])=!discoverd){
			E(G)+=(i,j)->(i, j+h)
		}
	}
}
```
This is $O(L^2)$  because we do work constant work for each entry of the matrix.
Then we just run a quick shortest path algo with every edge of weight 1 because we have a DAG (You cant have a loop becuase i-h and j-h doesnt happen) this finds us the depth of the grapth which is also the k we are loking for.

Notes: 
There may be some other way. If you can tell me I would be very happy because this took me a very long time to solve.

### 10
Idea:
left/down = black
right/up = white

If you bound an image isnt there only onw way to bound the image? What do they mean by bounding?

### 11
Because it is not a DAG and $k*c(e)>0$ we can run Dijkstra's algorithm where we keep track (how long the shortest path is, the number of edges of that path) in the vertex. The starting vertex has the atribute (0, 0);
Prove:
It works becuase we are runniing Dijkstra's algorithm and keeping track of the nubmer of edges that path to the new vertex has. So we are making sure that Relaxing is done with the right amout of weight in each edge.
Time complexity:
It is the same as Dijkstra's algorithm $O((n+m)log n) < O(n(n+m))$

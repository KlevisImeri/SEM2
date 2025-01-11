#### 12 
*Give an algorithm with running time O(n+m) that decides whether there is a path from s to t that passes through at most one green vertex.*
We just run the DFS-VISIT(s) where the adjacecy list has the red verteces order first:
r : r r r g
r : r r
r : g r  -> this is wrong  r: r g is right
r : r 
... 
g :... -> green listed in the end.
g :...
After we encounter a green vertex we just run RedDFS-VISIT() which only goes through red verteces.

Prove:
The idea is to fist we check the lower depths if we can reach through only red verteces and as less as posible green verteces. Than we start using them. This puts the green verteces as low as possible in the tree so they are more leaves and don remove parts that can be reached from red verteces.
![[Pasted image 20230408193813.png]]
The idea of formal proof is that:
1. you can either reach the subparts of the trees from a red vertex or from the green vertex.
2. Because the green vertex cuts of the tree we try all the red vertexes first which is the most optimal way.

Code:
```C++
Input:G= (V,E).DFS(G) //grapth is orginized as mentioned 

DFS-VISIT(G,u){
	D++;
	u.d=D;
	u.satus=VISITED;
	for(each v∈Adj[u]){		  
		if(u.status==UNVISITED){
			if(u.color==red){
				v.p=u;
				DFS-VISIT(G,v);
			}
			if(u.color==green){
				v.p=u;
				RED-DFS-VISIT(G,v);
			}
		}
	}
	F++;
	u.status = FINISHED;
	u.f = F;
}

RED-DFS-VISIT(G,u){
	D++;
	u.d=D;
	u.satus=VISITED;
	for(each v∈Adj[u]){		  
		if(u.status==UNVISITED && u.color!=green){
			v.p=u;
			RED-DFS-VISIT(G,v);
		}
	}
	F++;
	u.status = FINISHED;
	u.f = F;
}

int main(){
	//initialization 
	for (each u∈V(G)){
		u.status=UNVISITED;
		u.d=∗,u.f=∗and u.p=∗;
	}
	D=0;F=0;
	
	//so we reach every component
	for (each  u∈V(G)){
		if (u.status== ∗){
			DFS-VISIT(G,u);
		}
	}
}

```
![[Pasted image 20230410001123.png]]
#### 13
Solution:
``` js
w = [1,2,4,....k]
start = 1, end = k

//binary search O(log k)
while(start < end){ 
	mid = [end-start/2]  //flor
	//one dfs is O(m+n)
	if(x,y in DFS(weight < mid)){ 
		end = mid;
	}else{
		start = mid;
	}
}

```
Because the grapth is connected and diracted m dominates therefor we can write time complexity of DFS to b $O(m)$ $\implies$ time complexity of our algorithm is $O(m\log k)$.




$\forall{u} \in V(G) \to \{u,u'\}+u_{mid}$ := path enforcement 
___
##### 5
HAMCYCLE $\leq$ HAMPATH
Mapping
A $H_c$ should go through one of the edges going out from one vertex. So we add s and connected to v. I know that my Hp in the new graph will need to have the edge {sv} because is the only way to include s. No I know that the Hc will be in one of the edges {vx} x is neighbor of v. So i connect every x to t.
=>
If there was an Hc i n G than G' will will have a hp going s-v...x-t. x is a neighbor.
<=
If G' has an Hp than it should include {{sv}{xt}} where x is some neighbor of v => G has a Hc v...x-v.
___
##### 6
P1 = HAMPATH = {G|$H_p\in G$}
P2 = MAXDEG-SPANNINGTREE = {(G,k)|$T_s\in G$ s.t $\Delta(T_s)=k$}
1. f(G)=(G,1) $~~~~~\Delta(T_s)=1$
2. $G\in P_1\implies H_c \in G \implies  T_s \in (G,1)$ s.t $\Delta(T_s)=1\implies (G,1) \in P_2$ 
(Hc uses all the edges and every edge has degree 1)
3. $(G,1) \in P_2 \implies  T_s \in (G,1)$ s.t $\Delta(T_s)=1 \implies H_c \in G \implies G\in P_1$
(A $T_s$ of all degree 1 is a path connecting all vertices)
4. $f(G)\in O(1)$
$\implies$ HAMPATH $\leq_p$ MAXDEG-SPANNINGTREE
___
##### 7.
P1 = HAMPATH = {G|$H_p\in G$}
P2 = MAXLEAF-SPANNINGTREE = {(G,k)|$T_s\in G$ s.t numLeaves($T_s$)=k}
1. f(G)=(G,2)
2. if G in P1 => has an HP => G has a ST of 2 leaves (the start and the end of the HP) because HP includes every vertex of G and it is a path (not Cycle). It has 2 vertices deg 1 and all the others deg 2 => 2 leaves => f(G)=(G,2) is in P2;
3. if (G,2) in P2 => has ST of 2 leaves => you have a path which contains every vertex of G (from connectivity of ST) which is a HP of G => G has a HP.
4. f(G) in O(1) 
___
##### 8
L = FACTORIZATION = {(m,t)|$\exists$d s.t d|m and $1<d \leq t$}
a) 
witness = give divisor d  |d|$\leq$|(m,t)|
verification  in P (just division and check)
	- $1<d \leq t$
	- d|m 

=>  FACTORIZATION in NP

b)
~L =  {(m,t)|$\not\exists$d s.t d|m and $1<d \leq t$} = {(m,t)|$\forall$d d$\nmid$m or $d>t$ or d=1}
witness = prime factor of m s.t $\neq$ to 1 and $\leq$ t |m|$\leq$|mt|
verification{
-check if the factor is a prime (in  P)
-check if factor|m  (in P)
} => (in P)
=> ~L in NP 
L and ~L in NP => L in coNP

c) $P= NP~\cap~coNP$ => [if L in NP and  L in coNP => L in P]
~FACTORIZATOIN in NP and in coNP => ~FACTORIZATION in P

PRIMES $\leq_p$ ~FACTORIZATION
f(p)=(m=p,t=p+1)
=>:
p in PRIMES => p a prime => $\not\exists$d s.t d|p and $1<d \leq p+1$ => (p,p+1) in ~FACTORIZATION
<=:
(p,p) in ~FACTORIZATION => $\not\exists$d s.t d|p and $1<d \leq p+1$ => p is a prime => p in PRIMES
RT:
f(p) in 0(1) 

=> PRIMES in P => RSA can be decrypted fast.
___
##### 9




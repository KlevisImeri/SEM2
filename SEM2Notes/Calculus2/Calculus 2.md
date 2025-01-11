
## Orthogonality
1. Don't forget to substitute c
2. Don't forget the c of integration 

## Differecnial Equations
### Linear First order differencial Equation
$$y^{\prime} + p(t)y = g(t)$$
$$u(t)y^{\prime} + u(t)p(t)y = u(t)g(t)$$
$$\ln u(t)=\int p(t)dt$$
$$u(t)y = \int g(t)u(t)dt + c$$
### Homogenius First Order Linear Equations
$$\frac{dy}{dx}=F(\frac{y}{x})$$
$$let~~v=\frac{y}{x} \implies \frac{dy}{dx}=F(v)=v+x\frac{dv}{dx}$$
$$\frac{dv}{F(v)-v}=\frac{dx}{x}$$
### Exact First Order Differeccial Equations
$$M(x, y)dx + N(x, y)dy = 0$$
$$M_y=N_x$$
$$\int M(x,y)dx+\int N(y)dy=c$$
Choose as $\mu(n)$
$$\frac{d\mu}{dx}=\frac{N_x-M_y}{M}\mu$$
### Secound Order Homogenius Differecncial Equations
$$ay^{\prime\prime}+by^{\prime}+c=0$$
$$y=c_1e^{r_1t}+c_2e^{r_2t}$$
$$y=c_1e^{r_1t}+c_2te^{r_1t}$$
$$y=e^{\alpha t}(c_1cos(\beta t)+c_2sin(\beta t))$$
$$\alpha +-\beta i$$

### Euler Equations
![[Pasted image 20230403105145.png]]

### Secound Order Nonhomogenius Variation of Parameters
$$y^{\prime\prime} + p(t)y^{\prime} + q(t)y = g(t)$$
$$u_1=-\int\frac{y_2~g}{W(y_1,y_2)}dt~~~~~~~~~~~u_2=\int\frac{y_1~g}{W(y_1,y_2)}dt$$
$$Y=y_1u_1+y_2u_2$$
$$y = c_1y_1(t) + c_2y_2(t) + Y(t)$$
## Series
### The $n$th-Term Test
$$a_n\not\rightarrow0~~or~~d.n.e\implies \sum_{n=1}^{\infty} a_n~~diverges$$

### Bounding
$$\sum_{n=1}^{\infty} a_n<\infty~~~~a_n\geq0 \iff S_n\leq bound$$
### Integral Test
$a_n\geq0~~~a_n=f(n)~~~~f(m+s)<f(m)$ 
$$\sum_{n=N}^{\infty} a_n \to c,~\infty= \int_N^\infty f(x)dx\to c,~\infty$$
### Cauchy condesation test
$\{a_n\}~~~a_n\geq a_{n+1} ~~~~\lim_{n\to\infty}\{a_n\}=0$  

$$\sum a_n \to c \iff \sum 2^n a_{2^n} \to k$$


### Direct Comparison Test
$\sum a_n~~~~\sum b_n~~~~~0\leq a_n \leq b_n$
$$1. \sum b_n \to c \implies \sum a_n \to k$$
$$2.\sum a_n \to \infty \implies \sum b_n \to \infty$$
### Limit Comparsison Test
$a_n>0~~~b_n>0~~~n\geq N$
$$1. \lim_{n\to\infty}\frac{a_n}{b_n}=c~~~~c>0 \implies \sum a_n,\sum b_n\to c, \infty$$
$$2. \lim_{n\to\infty}\frac{a_n}{b_n}=0~~~\sum b_n \to c\implies \sum a_n \to k$$
$$3.\lim_{n\to\infty}\frac{a_n}{b_n}=\infty~~~\sum b_n \to \infty \implies \sum a_n \to \infty$$
2. a_n grows slower then a convergent
3. a_n grows faster then a divergent

### Absolutelly/Conditionally convergent test
$$\sum |a_n| \to 0 \implies \sum a_n\to 0~~~~absolutely~~~convergent$$
$$\sum |a_n| \to \infty ~~but~~\sum a_n\to 0~~~~Conditionally~~~convergent$$
### The ratio test
$\sum a_n$ 
$$\lim_{n\to\infty}|\frac{a_{n+1}}{a_n}|=p$$
$p<1$  converges absolutely
$p=1$  inconclusive
$p>1$  diverges


### The root test
$\sum a_n$
$$\lim_{n\to\infty}\sqrt[n]{|a_n|}=p$$
$p<1$  converges absolutely
$p=1$  inconclusive
$p>1$  diverges

### The Alternating Series Test
$1.~~~a_n\geq 0$
$2.~~~a_n\geq a_{n+1}~~~n\geq N$ 
$3.~~~a_n \to 0$ 

$$\sum_{n=1}^{\infty}(-1)^{n+1}a_n \to c$$
### The Alternating Series Extimation Theorem
$$\sum_{n=1}^{\infty}(-1)^{n+1}a_n \to L$$
$$L-S_n = (-1)^{n}a_{n+1}+(-1)^{n+1}a_{n+2}.....$$
$$|L-S_n|< a_{n+1}$$
#### Rrearrangment Theorem for Absolute Convergent
> We can rearange absolute convergent series and theire sum is the same

### Tailor Series
$$\sum_{n=0}^{\infty}\frac{f^{n}\left(a\right)}{n!}\left(x-a\right)^{n}$$
### Fourier Series
#### Special Integrals
$$\int_{-\pi}^{\pi}\cos^2(x)=\pi~\int_{-\pi}^{\pi}\sin^2(x)=\pi~\int_{-\pi}^{\pi}\cos(x)=0~\int_{-\pi}^{\pi}\sin(x)=0$$ $$\int_{-\pi}^{\pi}\sin\left(px\right)\sin\left(qx\right)dx=\begin{cases}0,~~~p\neq q\\ \pi,~~~q=p\end{cases}$$
$$\int_{-\pi}^{\pi}\sin\left(px\right)\cos\left(qx\right)dx=0$$
$$\int_{-\pi}^{\pi}\cos\left(px\right)\cos\left(qx\right)dx=\begin{cases}0,~~~p\neq q\\ \pi,~~~q=p\end{cases}$$

#### 3 steps
$$f_n(x)=a_0 + \sum_{k=1}^{\infty}(a_k\cos kx+b_k\sin kx)$$
$$\int_0^{2\pi} f(x)dx=\int_0^{2\pi} f_n(x)dx=a_0x|^{2\pi}_{0}=2\pi a_0$$
$$\int_0^{2\pi} f(x)\sin(kx) dx=\int_0^{2\pi} f_n(x)\sin(kx)dx=\pi b_k$$
$$\int_0^{2\pi} f(x)\cos(kx) dx=\int_0^{2\pi} f_n(x)\cos(kx)dx=\pi a_k$$
#### Final formula
$$a_0=\frac{1}{2\pi}\int_0^{2\pi} f(x)dx$$
$$b_k=\frac{1}{\pi}\int_0^{2\pi} f(x)\sin(kx)dx$$
$$a_k=\frac{1}{\pi}\int_0^{2\pi} f(x)\cos(kx)dx$$
$$f_n(x)=a_0 + \sum_{k=1}^{\infty}(a_k\cos kx+b_k\sin kx)$$
#### Forier Series at the point of discontinuity c
$$f_n(c)_{n\to \infty}=\frac{f(c^+)-f(c^-)}{2}$$




## Tricks:
$\sum k^2=n(n+1)(2n+1)/6$ 
$n!/n^n\to 0$ 
$\sum 1(3)...(2n+1)/4^n2^nn!$  use ratio test
In alternating series:
1. n'th terem test
2. $|a_n|$
3. Alternating series test
At convergence of powerseries x=0 i kind of a special test when you check the radius of convergence
Geometric series stats from 0
![[Pasted image 20230402214813.png]]
You can just put the series at the integral and find c
$$\int \sec x dx=\ln|\sec x+\tan x|+c$$
$$\int \tan x dx=\ln|\sec x|+c$$
$$\int\frac{dx}{\sqrt{a^2-x^2}}=\sin^{-1}(\frac{u}{a})+c$$
$$\int\frac{dx}{a^2-x^2}=\frac{1}{a}\tan^{-1}(\frac{x}{a})+c$$
$$\int\frac{dx}{x\sqrt{a^2-x^2}}=\frac{1}{a}\sec^{-1}(\frac{|x|}{a})+c$$

Check:
 1. geometric series
 2. p series
 3. limit
 4. integral
 5. telescoping
Exercieses not done:
10.6 86

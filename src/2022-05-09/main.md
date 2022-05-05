# Vector space

A vector space is a set $V$ along with an addition
on $V$ and a scalar multiplication on $V$ such that
the following properties hold:

- $u+w=w+u$ for all $u,w\in V$;
- $\left(u+v\right)+w=u+\left(v+w\right)$ and $\left(ab\right)u=a\left(bu\right)$ for all $u,v,w\in V$ and all $a,b\in\mathds{F}$;
- there exists $0\in V$ such that $u+0=u$ for all $u\in V$;
- for every $u\in V$, there exists $w\in V$ such that $u+w=0$;
- $1u=u$ for all $u\in V$;
- $a\left(u+w\right)=au+aw$ and $\left(a+b\right)u=au+bu$ for all $a,b\in\mathds{F}$ and all $u,w\in V$.

## Example

The set
$$
\left\{
  f\colon\left[0,1\right]\to\mathds{R}
  \mid f\text{ is continuous.}
  \right\}
$$
is a vector space with the operations:

1. $\left(f+g\right)\left(x\right)=\left(f\right)\left(x\right)+\left(g\right)\left(x\right)$.
2. $\left(cf\right)\left(x\right)=cf\left(x\right)$, for $c\in\mathds{F}$.

# Hamel basis

A basis of $V$ is a subset $H$ or list of vectors in $V$ that is linearly independent and spans $V$.

1. $\forall F\subseteq H$, $F$ is finite, $\sum\limits_{f\in F}\lambda_{f}\cdot f=0_{V}$, with $\lambda_{f}\in\mathds{F}\implies\lambda_{f}=0_{\mathds{F}}$.
2. $\forall u\in V$, $\exists\,F$ finite, $F\subseteq H$ such that $\sum\limits_{f\in F}\lambda_{f}\cdot f=u$, with $\lambda_{f}\in\mathds{F}$.

## Remark

The vector space $\left\{f\colon\left[0,1\right]\to\mathds{R}\mid f\text{ is continuous.}\right\}$ has uncountable Hamel dimension.

# Norm

A norm on $V$ is a map from $V$ to the nonnegative reals:
$$
\left\|\cdot\right\|\colon V\to\mathds{R}_{\geq0}
$$
satisfying

- $\forall x\in V: \left\|x\right\|=0\iff x=0_{V}$.
- $\forall x\in V,\lambda\in\mathds{F}:\left\|\lambda x\right\|=\left|\lambda\right|\left\|x\right\|$.
- $\forall x,y\in V:\left\|x+y\right\|\leq\left\|x\right\|+\left\|y\right\|$.


## Normed vector space

Let $V$ be a vector space over $\mathds{F}$.
Let $\left\|\cdot\right\|$ be a norm on $V$.
Then, $\left(V,\left\|\cdot\right\|\right)$ is a normed vector space.

Let $V_i$, $i=1,\ldots,n$, be a normed vector space of dimension $n_{i}$
with a scalar product, we define

$$
\prod\limits_{i=1}^{n}V_{i}\coloneqq
\left\{
  \left(v_{1},\ldots,v_{n}\right)\mid
  v_{1}\in V_{1},\ldots,v_{n}\in V_{n}
  \right\}
$$

is a vector space of dimension $\sum\limits_{i=1}^{n}n_{i}$.

# Field vector

```cpp
template< class K, int SIZE >
class FieldVector;
```

represent a low-dimensional vector space with in $V=\mathds{F}^{n}$ over the field $\mathds{F}$.

```cpp
Dune::FieldVector<double, 3> v;
```

# Block vector

```cpp
template<class B, class A=std::allocator<B> >
class BlockVector;
```

```cpp
Dune::BlockVector<Dune::FieldVector<double, 3> >
```

# Linear map

Let $V$ and $W$ two vector spaces.
A linear map from $V$ to $W$ is a function $T\colon V\to W$ with the following properties:

- $T\left(u_{1}+u_{2}\right)=T\left(u_{1}\right)+T\left(u_{2}\right)$ for all $u_{1},u_{2}\in V$;
- $T\left(\lambda u\right)=\lambda\left(T u\right)$ for all $\lambda\in\mathds{F}$ and all $u\in V$.

## Example

Backward shift: Define $T\in\mathcal{L}\left(\mathds{F}^{\infty},\mathds{F}^{\infty}\right)$ by

$$
T\left(x_{1},\ldots\right)=
\left(x_{2},\ldots\right).
$$

## Matrix of a linear map

Suppose $T\in\mathcal{L}\left(V,W\right)$

<!-- https://dune-project.org/pdf/publications/istl_para06.pdf -->
<!-- https://gitlab.dune-project.org/search?search=Dune%3A%3AMatrix&group_id=64&project_id=137&scope=&search_code=true&snippets=false&repository_ref=master&nav_source=navbar -->
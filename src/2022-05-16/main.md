# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México)

- \alert{\texttt{Mon May  9 07:00:00 AM -05 2022}}.

- \texttt{Sun May  15 07:00:00 AM -05 2022}.

# `Functions`

$$
Df\colon
\mathcal{D}\to
L\left(\mathcal{D}, \mathcal{R}\right)
$$

\emoji{open-book} [`std::function`](https://en.cppreference.com/w/cpp/utility/functional/function)
is a general-purpose polymorphic function wrapper.

\footnotesize
```cpp
template <class R, class... Args>
class function<R(Args...)>
```

# `Functions`

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

### Documentación de CMake

\small
- [`cmake_minimum_required`](https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html)

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1}, firstline=1, lastline=7]{cpp}{src/2022-05-09/function.cc}
:::
::::::::::::::

# Solving $Ax=v$

$$
x=A^{-1}v.
$$

# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México)

- \texttt{Mon May  2 07:00:00 AM -05 2022}.

- \alert{\texttt{Sun May  7 07:00:00 AM -05 2022}}.

# CMake as a build system

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

### Documentación de CMake
\small
- [`cmake_minimum_required`](https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html)
- [`project`](https://cmake.org/cmake/help/latest/command/project.html)
- [`find_package`](https://cmake.org/cmake/help/latest/command/find_package.html)
- [`list`](https://cmake.org/cmake/help/latest/command/list.html)
- [`include`](https://cmake.org/cmake/help/latest/command/include.html)
- [`add_executable`](https://cmake.org/cmake/help/latest/command/add_executable.html)
- [`target_link_libraries`](https://cmake.org/cmake/help/latest/command/target_link_libraries.html)
\normalsize

### Documentación de Dune build system
\small
- [`dune_project`](https://www.dune-project.org/sphinx/content/sphinx/core-2.7/commands/dune_project.html)
- [`dune_enable_all_packages`](https://www.dune-project.org/sphinx/content/sphinx/core/commands/dune_enable_all_packages.html)
- [`finalize_dune_project`](https://www.dune-project.org/sphinx/content/sphinx/core-2.7/commands/finalize_dune_project.html)
- `target_link_dune_default_libraries`

\footnotesize
```cmake
macro(target_link_dune_default_libraries _target)
  foreach(_lib ${DUNE_LIBS})
    target_link_libraries(${_target} PUBLIC ${_lib})
  endforeach()
endmacro(target_link_dune_default_libraries)
```

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={5-6,9,12,14,17,20,23}, firstline=1, lastline=23]{cmake}{src/2022-05-08/dune-vector-learn/CMakeLists.txt}
:::
::::::::::::::

# `ArrayList`

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

\emoji{open-book} [`Dune::TestSuite`](https://gitlab.dune-project.org/core/dune-common/-/blob/releases/2.8/dune/common/test/testsuite.hh)

A Simple helper class to organize your test suite.

\footnotesize
```cpp
TestSuite(std::string name = "",
          ThrowPolicy policy = ThrowOnRequired)
```

\normalsize

\emoji{open-book} [`Dune::ArrayList`](https://dune-project.org/doxygen/2.8.0/classDune_1_1ArrayList.html)
A dynamically growing random access list.

\footnotesize
```cpp
template <class T,
          int N = 100,
          class A = std::allocator<T>>
class Dune::ArrayList<T, N, A>
```

<!-- https://stackoverflow.com/questions/58522426/how-to-fix-non-type-template-argument-is-not-a-constant-expression-in-eigen3 -->
<!-- https://en.cppreference.com/w/cpp/language/attributes/maybe_unused -->

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={6-7,11-12,20}, firstline=1, lastline=21]{cpp}{src/2022-05-08/dune-vector-learn/dune-vector-learn.cc}
:::
::::::::::::::

# `FieldVector`

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

\emoji{open-book} [`[[maybe_unused]]`](https://en.cppreference.com/w/cpp/language/attributes/maybe_unused)
Suppresses warnings on unused entities.

\emoji{open-book} [`Dune::FieldVector`](https://dune-project.org/doxygen/2.8.0/classDune_1_1FieldVector.html)
vector space out of a tensor product of fields.

\footnotesize
```cpp
template <class K, int SIZE>
class Dune::FieldVector<K, SIZE>
```

\normalsize

\emoji{open-book} [`Dune::printvector`](https://dune-project.org/doxygen/2.8.0/group__ISTL__IO.html#ga8674c142d6b29e12bcb94075f952d1e1)
Print an ISTL vector.

\footnotesize
```cpp
void Dune::printvector(std::ostream &s,
                       const V &v,
                       std::string title,
                       std::string rowtext,
                       int columns = 1,
                       int width = 10,
                       int precision = 2)
```

\normalsize

\emoji{open-book} [`DUNE_THROW`](https://dune-project.org/doxygen/2.8.0/group__Exceptions.html)
Macro to throw an exception.

\footnotesize
```cpp
#define DUNE_THROW (E, m)
```

\normalsize


\emoji{open-book} [`Dune::Exception`](https://dune-project.org/doxygen/2.8.0/classDune_1_1Exception.html)
Base class for Dune-Exceptions.

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1-2,9-10,15-16}, firstline=1, lastline=28]{cpp}{src/2022-05-08/dune-vector-learn/field-vector.cc}
:::
::::::::::::::

# `std::vector`

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

$$
v\in\mathds{Z}^{100}.
$$

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1}, firstline=1, lastline=25]{cpp}{src/2022-05-08/dune-vector-learn/fmt-vector.cc}
:::
::::::::::::::

# `Matrix`

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

\emoji{open-book} [`Dune::Matrix`](https://dune-project.org/doxygen/2.8.0/classDune_1_1Matrix.html)
A generic dynamic dense matrix.

\footnotesize
```cpp
template <class T, class A = std::allocator<T>>
class Dune::Matrix<T, A>
```

\normalsize

\emoji{open-book} [`Dune::printmatrix`](https://dune-project.org/doxygen/2.8.0/group__ISTL__IO.html#ga81eff30b8e58a169e319b49f62e4ea7b)
Print a generic block matrix.

\footnotesize
```cpp
void Dune::printmatrix(std::ostream &s,
                       const M &A,
                       std::string title,
                       std::string rowtext,
                       int width = 10,
                       int precision = 2)
```

Die Maximumsnorm, Tschebyschew-Norm oder $\infty$-Norm (Unendlich-Norm) eines Vektors ist definiert als

$$
{\left\|x\right\|}_{\infty} =
\max_{i=1,\dotsc,n}\left|x_{i}\right|
$$

Die euklidische Norm oder $2$-Norm eines Vektors ist definiert als

$$
{\left\|x\right\|}_{2} =
\sqrt{\sum_{i=1}^{n}{\left|x_{i}\right|}^2}
$$

Die Summennorm, (genauer) Betragssummennorm, oder $1$-Norm (lies: „Einsnorm“) eines Vektors ist definiert als

$$
{\left\|x\right\|}_{1} =
\sum_{i=1}^{n}\left|x_{i}\right|
$$

<!-- https://en.cppreference.com/w/cpp/algorithm/ranges/iota -->
<!-- https://sodocumentation.net/cplusplus/topic/2294/std--function--to-wrap-any-element-that-is-callable -->
<!-- https://docs.microsoft.com/de-de/cpp/cpp/cpp-language-reference?view=msvc-170 -->
<!-- https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c -->
<!-- https://stackoverflow.com/questions/62353259/error-cannot-convert-lambdadouble-to-double-double -->
<!-- https://en.cppreference.com/w/cpp/algorithm/iota -->
<!-- https://www.bu.edu/tech/files/2016/09/intro_matlab.pdf -->

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1-3,10-11,19}, firstline=1, lastline=27]{cpp}{src/2022-05-08/dune-vector-learn/matrix.cc}
:::
::::::::::::::

# `Polynomial`

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

Die Frobeniusnorm ${\left\|\cdot\right\|}_{F}$ einer Komplexe Zahl $\left(m\times n\right)$-Matrix $A\in\mathds{K}^{m\times n}$ mit $\mathds{K}$ aus dem Körper der reellen oder komplexen Zahlen ist definiert als

$$
{\left\|A\right\|}_{F}\coloneqq
\sqrt{\sum_{i=1}^{m}\sum_{j=1}^{n}\left|a_{ij}\right|^{2}}.
$$

\emoji{open-book} [`Dune::Functions::Polynomial`](https://dune-project.org/doxygen/2.8.0/classDune_1_1Functions_1_1Polynomial.html)
A scalar polynomial implementation.

\footnotesize
```cpp
template <class K>
class Dune::Functions::Polynomial<K>
```

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={3,7-8}, firstline=1, lastline=19]{cpp}{src/2022-05-08/dune-vector-learn/polynomial.cc}
:::
::::::::::::::

# `range`

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

<!-- https://stackoverflow.com/questions/50549611/slicing-a-vector-in-c -->

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1,5-14}, firstline=1, lastline=14]{cpp}{src/2022-05-08/dune-vector-learn/vector.cc}
:::
::::::::::::::

<!-- https://gitlab.math.tu-dresden.de/osander/skript-numerik -->

# `range`

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={18}, firstline=16, lastline=34]{cpp}{src/2022-05-08/dune-vector-learn/vector.cc}
:::
::::::::::::::
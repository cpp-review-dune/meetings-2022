# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México -1)

- \texttt{Mon May  2 07:00:00 AM -05 2022}.

- \alert{\texttt{Sun May  7 07:00:00 AM -05 2022}}.

# CMake as a build system

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

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
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={5-6,9,12,14,17,20}, firstline=1, lastline=20]{cmake}{src/2022-05-08/dune-vector-learn/CMakeLists.txt}
:::
::::::::::::::

# Matrices

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

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
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={6-7,11-12,20}, firstline=1, lastline=21]{cpp}{src/2022-05-08/dune-vector-learn/dune-vector-learn.cc}
:::
::::::::::::::

# Matrices

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="49%" align=center}

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
::: {.column width="51%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1-2,9-10,15-16}, firstline=1, lastline=28]{cpp}{src/2022-05-08/dune-vector-learn/field-vector.cc}
:::
::::::::::::::

# Matrices

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

$$
v\in\mathds{Z}^{100}.
$$

:::
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1}, firstline=1, lastline=25]{cpp}{src/2022-05-08/dune-vector-learn/fmt-vector.cc}
:::
::::::::::::::

# Visualización

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

<!-- https://en.cppreference.com/w/cpp/algorithm/ranges/iota -->
<!-- https://sodocumentation.net/cplusplus/topic/2294/std--function--to-wrap-any-element-that-is-callable -->
<!-- https://docs.microsoft.com/de-de/cpp/cpp/cpp-language-reference?view=msvc-170 -->
<!-- https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c -->
<!-- https://stackoverflow.com/questions/62353259/error-cannot-convert-lambdadouble-to-double-double -->
<!-- https://en.cppreference.com/w/cpp/algorithm/iota -->
<!-- https://www.bu.edu/tech/files/2016/09/intro_matlab.pdf -->

:::
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1-3,10-11,19}, firstline=1, lastline=27]{cpp}{src/2022-05-08/dune-vector-learn/matrix.cc}
:::
::::::::::::::

# Visualización

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

## Basados

:::
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={3,7-8}, firstline=1, lastline=19]{cpp}{src/2022-05-08/dune-vector-learn/polynomial.cc}
:::
::::::::::::::

# Visualización

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

<!-- https://stackoverflow.com/questions/50549611/slicing-a-vector-in-c -->

:::
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1,5-14}, firstline=1, lastline=14]{cpp}{src/2022-05-08/dune-vector-learn/vector.cc}
:::
::::::::::::::

<!-- https://gitlab.math.tu-dresden.de/osander/skript-numerik -->

# Visualización

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

:::
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={18}, firstline=16, lastline=34]{cpp}{src/2022-05-08/dune-vector-learn/vector.cc}
:::
::::::::::::::

[](https://dune-project.org/doxygen/2.8.0/classDune_1_1Functions_1_1Polynomial.html)
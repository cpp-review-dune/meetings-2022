# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México -1)

- \texttt{Mon May  2 07:00:00 AM -05 2022}.

- \alert{\texttt{Sun May  7 07:00:00 AM -05 2022}}.

# Matrices

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

### Documentación de cmake

- [`cmake_minimum_required`](https://cmake.org/cmake/help/latest/command/cmake_minimum_required.html)
- [`project`](https://cmake.org/cmake/help/latest/command/project.html)
- [`find_package`](https://cmake.org/cmake/help/latest/command/find_package.html)
- [`list`](https://cmake.org/cmake/help/latest/command/list.html)
- [`include`](https://cmake.org/cmake/help/latest/command/include.html)
- [`add_executable`](https://cmake.org/cmake/help/latest/command/add_executable.html)
- [`target_link_libraries`](https://cmake.org/cmake/help/latest/command/target_link_libraries.html)


### Documentación de dune build system

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
\inputminted[highlightlines={5-6,9,12,14,17,20}, firstline=1, lastline=22]{cpp}{src/2022-05-08/dune-vector-learn/CMakeLists.txt}
:::
::::::::::::::

# Visualización

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

<!-- https://stackoverflow.com/questions/58522426/how-to-fix-non-type-template-argument-is-not-a-constant-expression-in-eigen3 -->
<!-- https://en.cppreference.com/w/cpp/language/attributes/maybe_unused -->

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1}, firstline=1, lastline=34]{cpp}{src/2022-05-08/field-vector.cc}
:::
::::::::::::::

# Visualización

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

## Basados

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1}, firstline=1, lastline=31]{cpp}{src/2022-05-08/fmt-vector.cc}
:::
::::::::::::::

# Visualización

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

## Basados

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1}, firstline=1, lastline=27]{cpp}{src/2022-05-08/matrix.cc}
:::
::::::::::::::

# Visualización

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

## Basados

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1}, firstline=1, lastline=33]{cpp}{src/2022-05-08/polynomial.cc}
:::
::::::::::::::

# Visualización

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

## Basados

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1}, firstline=1, lastline=35]{cpp}{src/2022-05-08/vector.cc}
:::
::::::::::::::

<!-- https://gitlab.math.tu-dresden.de/osander/skript-numerik -->
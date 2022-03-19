# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México -1)

- \alert{\texttt{Sat Mar 19 07:00:00 AM -05 2022}}.

- \texttt{Sun Mar 20 07:00:00 AM -05 2022}.

# Grid interface

A.

# [`recipe-integration.cc`](https://www.dune-project.org/doxygen/2.8.0/recipe-integration.html)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="65%" align=center}

## [`#include <dune/common/foo.hh>`](https://www.dune-project.org/doxygen/2.8.0/dir_ff772a0290412ea04de4fbde7f3d7cae.html)

- [`mpihelper.hh` File Reference](https://www.dune-project.org/doxygen/2.8.0/mpihelper_8hh.html)
- [`parametertreeparser.hh` File Reference](https://www.dune-project.org/doxygen/2.8.0/parametertreeparser_8hh.html)
- [`timer.hh` File Reference](https://www.dune-project.org/doxygen/2.8.0/timer_8hh.html)

## [`#include <dune/geometry/foo.hh>`](https://www.dune-project.org/doxygen/2.8.0/dir_ff772a0290412ea04de4fbde7f3d7cae.html)

- [`quadraturerules.hh` File Reference](https://www.dune-project.org/doxygen/2.8.0/quadraturerules_8hh.html)
- [`Dune::Geo::ReferenceElement<Implementation>` Class Template Reference](https://www.dune-project.org/doxygen/2.8.0/classDune_1_1Geo_1_1ReferenceElement.html)

## [`#include <dune/grid/foo.hh>`](https://www.dune-project.org/doxygen/2.8.0/dir_b835d2b10d4bb6ff2c6d149ed2a0408f.html)

- [`yaspgrid.hh` File Reference](https://www.dune-project.org/doxygen/2.8.0/yaspgrid_8hh.html)

:::
::: {.column width="35%" align=center}

## Code snippet

\small
\inputminted[highlightlines={2-4}, firstline=1, lastline=13]{cpp}{src/2022-03-19/recipe-integration.cc}
:::
::::::::::::::

# [`recipe-integration.cc`](https://www.dune-project.org/doxygen/2.8.0/recipe-integration.html)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="65%" align=center}

## [`Dune::MPIHelper` Class Reference](https://www.dune-project.org/doxygen/2.8.0/classDune_1_1MPIHelper.html)

- A.

## [`Dune::YaspGrid<dim,Coordinates>` Class Template Reference](https://www.dune-project.org/doxygen/2.8.0/classDune_1_1YaspGrid.html)

- B.

## [`Dune::FieldVector<K,SIZE>` Class Template Reference](https://www.dune-project.org/doxygen/2.8.0/classDune_1_1FieldVector.html)

- C.

:::
::: {.column width="35%" align=center}

## Code snippet

\small
\inputminted[highlightlines={18-19,23,25}, firstline=18, lastline=33]{cpp}{src/2022-03-19/recipe-integration.cc}
:::
::::::::::::::

# [`recipe-integration.cc`](https://www.dune-project.org/doxygen/2.8.0/recipe-integration.html)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="65%" align=center}

## [`Dune::MPIHelper` Class Reference](https://www.dune-project.org/doxygen/2.8.0/classDune_1_1MPIHelper.html)

- A.

:::
::: {.column width="35%" align=center}

## Code snippet

\small
\inputminted[highlightlines={37,52}, firstline=35, lastline=50]{cpp}{src/2022-03-19/recipe-integration.cc}
:::
::::::::::::::

# [`recipe-integration.cc`](https://www.dune-project.org/doxygen/2.8.0/recipe-integration.html)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="65%" align=center}

## [`Dune::MPIHelper` Class Reference](https://www.dune-project.org/doxygen/2.8.0/classDune_1_1MPIHelper.html)

- A.

:::
::: {.column width="35%" align=center}

## Code snippet

\small
\inputminted[highlightlines={37,52}, firstline=35, lastline=50]{cpp}{src/2022-03-19/recipe-integration.cc}
:::
::::::::::::::

<!--
\tiny
\inputminted[linenos, highlightlines={2-4}, firstline=1, lastline=13]{cpp}{src/2022-03-19/recipe-iterate-over-grid.cc}

# Ejemplos

\footnotesize
\inputminted[firstline=1, lastline=10]{bash}{src/2022-03-19/commands.sh} -->

# Referencias

- [A generic grid interface for parallel and adaptive scientific computing. Bastian, P., Blatt, M., Dedner, Andreas, Engwer, C., Klöfkorn, R., Ohlberger, M. and Sander, O. (2008)](https://link.springer.com/article/10.1007/s00607-008-0003-x)
- [The DUNE Grid Interface An Introduction. Christian Engwer](https://conan.iwr.uni-heidelberg.de/data/events/dune-course_2017/slides/gridinterface.pdf)
- [AMDiS Workshop 2021. Simon Praetorius](https://wwwpub.zih.tu-dresden.de/~praetori/amdis/workshop2021/slides_01.pdf)
- [The DUNE Grid Interface. Simon Praetorius](https://wwwpub.zih.tu-dresden.de/~praetori/amdis/workshop2021/slides_02.pdf)
- [The Dune Framework: Basic Concepts and Recent Developments. Peter Bastian, Markus Blatt, Andreas Dedner, Nils-Arne Dreier, Christian Engwer, René Fritze, Carsten Gräser, Christoph Grüninger, Dominic Kempf, Robert Klöfkorn, Mario Olberger, Oliver Sander](https://arxiv.org/pdf/1909.13672.pdf)
- [DUNE/PDELab course](https://dune-pdelab-course.readthedocs.io/_/downloads/en/latest/pdf)
- [The Distributed and Unified Numerics Environment (DUNE) Grid Interface HOWTO](https://www.researchgate.net/profile/Mario-Ohlberger/publication/237139143_The_Distributed_and_Unifled_Numerics_Environment_DUNE_Grid_Interface_HOWTO/links/0c9605284c9fb089be000000/The-Distributed-and-Unifled-Numerics-Environment-DUNE-Grid-Interface-HOWTO.pdf)
- [The Distributed and Unified Numerics Environment (DUNE)](https://maths.durham.ac.uk/lms/091/Talks/bastian.pdf)

<!-- https://conan.iwr.uni-heidelberg.de/data/people/peter/pdf/BastianBlattDednerEngwerKloefkornOhlbergerSander_Computing_2008.pdf -->
<!-- https://conan.iwr.uni-heidelberg.de/old-site/people/peter/pdf/BastianBlattDednerEngwerKloefkornKornhuberOhlbergerSander_Computing_2008.pdf -->

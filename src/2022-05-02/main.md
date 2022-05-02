# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México -1)

- \alert{\texttt{Mon May  2 07:00:00 AM -05 2022}}.

- \texttt{Sun May  7 07:00:00 AM -05 2022}.

# [Visualización](https://en.wikipedia.org/wiki/Scientific_visualization)
<!-- 
Referencias sobre visualización científica:
- https://events.prace-ri.eu/event/845/sessions/2707/attachments/989/1639/3D-scientific-visualisation-intro-Bologna.pdf
- https://www.tu.kielce.pl/~sk/files-pi/pi-scientific-visualisation.pdf
- https://inviwo.org
- http://www.cs.utah.edu/~crj/cs523
- https://www3.cs.stonybrook.edu/~qin/courses/geometry/fundamental-techniques-graphics-visualization.pdf
 -->
:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}
<!-- 
## Basados en `vtk`

- [Visualization Toolkit (VTK)](https://vtk.org/about/#overview)
  - [Ejemplos](https://kitware.github.io/vtk-examples/site/Cxx/#plotting)
  - [Disponible en `[community]`](https://archlinux.org/packages/community/x86_64/vtk)
- [Paraview](https://docs.paraview.org/en/latest/UsersGuide/introduction.html)
  - [Ejemplos](https://docs.paraview.org/en/latest/Tutorials/SelfDirectedTutorial/introduction.html)
  - [Disponible en `[community]`](https://archlinux.org/packages/community/x86_64/paraview)
 -->

<!-- 
- `AlphaPlot`
  - [Ejemplos](http://alphaplotwiki.com/index.php?title=Gallery)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/alphaplot)
- [ImPlot](https://github.com/epezent/implot)
- [](https://jkriege2.github.io/JKQtPlotter/example_tutorial_projects.html)
 -->

## Basados en `gnuplot`

- [`gnuplot`](http://www.gnuplot.info)
  - [Ejemplos](http://gnuplot.sourceforge.net/demo/simple.html)
  - [Disponible en `[extra]`](https://archlinux.org/packages/extra/x86_64/gnuplot)
- `plotcpp`
  - [Ejemplos](https://github.com/Kolkir/plotcpp/blob/master/example.png)
  - [Disponible en `[github]`](https://github.com/Kolkir/plotcpp)
- `sciplot`
  - [Ejemplos](https://sciplot.github.io/tutorials)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/sciplot)
- `lyrahgames-gnuplot`
  - [Ejemplos](https://home.lyrahgames.org/gnuplot/examples.html)
  - [Disponible en `[github]`](https://github.com/lyrahgames/gnuplot)
- `gnuplot-cpp`
  - [Ejemplos](https://github.com/martinruenz/gnuplot-cpp/blob/master/README.md#example-usage)
  - [Disponible en `[github]`](https://github.com/martinruenz/gnuplot-cpp)

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={9-10,12-17}, firstline=2, lastline=17]{cmake}{src/2022-05-02/CMakeLists.txt}
:::
::::::::::::::

# [Visualización](https://en.wikipedia.org/wiki/Scientific_visualization)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

## Basados en `matplotlib`

- [`matplotlib`](https://matplotlib.org)
  - [Ejemplos](https://matplotlib.org/stable/gallery/lines_bars_and_markers/lines_with_ticks_demo.html#sphx-glr-gallery-lines-bars-and-markers-lines-with-ticks-demo-py)
  - [Disponible en `[community]`](https://archlinux.org/packages/community/x86_64/python-matplotlib)
- `plotty`
  - [Ejemplos](https://github.com/ethz-asl/plotty/blob/master/README.md#simple-plot-of-a-vector)
  - [Disponible en `[github]`](https://github.com/ethz-asl/plotty)
- `Matplot++`
  - [Ejemplos](https://alandefreitas.github.io/matplotplusplus/plot-types/line-plots/line-plot)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/matplotplusplus)
- `matplotlib-cpp`
  - [Ejemplos](https://github.com/lava/matplotlib-cpp/blob/master/README.md#usage)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/matplotlib-cpp-git)
<!-- https://github.com/ThijsWithaar/matplotlib -->
<!-- https://soblin.github.io/matplotlibcpp17/index.html#autotoc_md5 -->
<!-- https://github.com/soblin/matplotlibcpp17 -->
<!-- https://github.com/TING2938/matplotlibcpp -->
<!-- https://github.com/madplotlib/madplotlib -->
<!-- https://github.com/yokaze/pyscience11 -->

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1,3,8-9}, firstline=1, lastline=10]{cpp}{src/2022-05-02/hello-matplotlib.cc}
:::
::::::::::::::

# [Bibliotecas de álgebra matricial](https://en.wikipedia.org/wiki/Comparison_of_linear_algebra_libraries)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

- [armadillo](http://arma.sourceforge.net/faq.html)
  - [Ejemplos](http://arma.sourceforge.net/docs.html#example_prog)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/armadillo)
- [Eigen](https://eigen.tuxfamily.org/index.php?title=Main_Page)
  - [Ejemplos](https://eigen.tuxfamily.org/dox/AsciiQuickReference.txt)
  - [Disponible en `[extra]`](https://archlinux.org/packages/extra/any/eigen)
- [xtensor](https://xtensor.readthedocs.io/en/latest)
  - [Ejemplos](https://xtensor.readthedocs.io/en/latest/getting_started.html)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/xtensor)
- [GNU Scientific Library](https://www.gnu.org/software/gsl/doc/html/index.html)
  - [Ejemplos](https://www.gnu.org/software/gsl/doc/html/math.html)
  - [Disponible en `[extra]`](https://archlinux.org/packages/extra/x86_64/gsl)
- [`dune-matrix-vector`](https://git.imp.fu-berlin.de/agnumpde/dune-matrix-vector)
  - [Ejemplos](https://git.imp.fu-berlin.de/agnumpde/dune-matrix-vector/-/blob/releases/2.8/dune/matrix-vector/test/arithmetictest.cc)
  - [Disponible en `[dune-agnumpde]`](https://gitlab.com/dune-archiso/repository/dune-agnumpde/-/jobs/2395489134/artifacts/browse/public/x86_64)
- [`dune-istl`](https://dune-project.org/modules/dune-istl)
  - [Ejemplos](https://gitlab.dune-project.org/core/dune-istl/-/blob/releases/2.8/dune/istl/test/fieldvectortest.cc)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/dune-istl)
- [`dune-common`](https://dune-project.org/modules/dune-common)
  - [Ejemplos](https://gitlab.dune-project.org/core/dune-common/-/blob/releases/2.8/dune/common/test/check_fvector_size.cc)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/dune-common)
- y más $\ldots$

:::
::: {.column width="50%" align=center}

## [istl Directory Reference](https://dune-project.org/doxygen/2.8.0/dir_076cadbab1aab890d8de2944aa4b23a3.html)

\includegraphics[width=0.35\paperwidth]{src/2022-05-02/dune-istl.png}
:::
::::::::::::::
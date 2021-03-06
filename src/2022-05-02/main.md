# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México)

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
::: {.column width="45%" align=center}
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

## Basados en [`gnuplot`](https://archlinux.org/packages/extra/x86_64/gnuplot)

- [Ejemplos](http://gnuplot.sourceforge.net/demo_5.4)
<!-- - `plotcpp`
  - [Ejemplos](https://github.com/Kolkir/plotcpp/blob/master/example.png)
  - [Disponible en `[github]`](https://github.com/Kolkir/plotcpp) -->
- `sciplot`
  - [Ejemplos](https://sciplot.github.io/tutorials)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/sciplot)
<!-- - `lyrahgames-gnuplot`
  - [Ejemplos](https://home.lyrahgames.org/gnuplot/examples.html)
  - [Disponible en `[github]`](https://github.com/lyrahgames/gnuplot) -->
<!-- - `gnuplot-cpp`
  - [Ejemplos](https://github.com/martinruenz/gnuplot-cpp/blob/master/README.md#example-usage)
  - [Disponible en `[github]`](https://github.com/martinruenz/gnuplot-cpp) -->
- `Matplot++`
  - [Ejemplos](https://alandefreitas.github.io/matplotplusplus/plot-types/line-plots/line-plot)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/matplotplusplus)
- `termplotlib`
  - [Ejemplos](https://github.com/nschloe/termplotlib/blob/main/README.md#line-plots)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/python-termplotlib)

:::
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={9-10,12-17}, firstline=2, lastline=17]{cmake}{src/2022-05-02/plot/CMakeLists.txt}
:::
::::::::::::::

# [Visualización](https://en.wikipedia.org/wiki/Scientific_visualization)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="66%" align=center}

## Basados en [`matplotlib`](https://archlinux.org/packages/community/x86_64/python-matplotlib)

- [Ejemplos](https://matplotlib.org/stable/gallery/lines_bars_and_markers/lines_with_ticks_demo.html#sphx-glr-gallery-lines-bars-and-markers-lines-with-ticks-demo-py)
<!-- - `plotty`
  - [Ejemplos](https://github.com/ethz-asl/plotty/blob/master/README.md#simple-plot-of-a-vector)
  - [Disponible en `[github]`](https://github.com/ethz-asl/plotty) -->
- `matplotlib-cpp`
  - [Ejemplos](https://github.com/lava/matplotlib-cpp/blob/master/README.md#usage)
  - [Disponible en `[aur]`](https://aur.archlinux.org/packages/matplotlib-cpp-git)
<!-- https://github.com/ThijsWithaar/matplotlib -->
<!-- https://soblin.github.io/matplotlibcpp17/index.html#autotoc_md5 -->
<!-- https://github.com/soblin/matplotlibcpp17 -->
<!-- https://github.com/TING2938/matplotlibcpp -->
<!-- https://github.com/madplotlib/madplotlib -->
<!-- https://github.com/yokaze/pyscience11 -->
<!-- https://github.com/matlab2tikz/matlab2tikz -->
<!-- https://github.com/texworld/tikzplotlib -->

\emoji{open-book} [`std::vector`](https://en.cppreference.com/w/cpp/container/vector)
is a sequence container that encapsulates dynamic size arrays.
<!-- https://github.com/lava/matplotlib-cpp/blob/master/matplotlibcpp.h#L1875 -->

### Side note

If $f\left(x\right)={x}^{\frac{p}{q}}$,
where $\frac{p}{q}$ is a positive fraction in _lowest terms_,
then you can plot as follows

- If $p$ is even and $q$ is odd, then graph $g\left(x\right)={\left|x\right|}^{\frac{p}{q}}$ instead of $f\left(x\right)$.
- If $p$ is odd and $q$ is odd, then graph $g\left(x\right)=\frac{\left|x\right|}{x}{\left|x\right|}^{\frac{p}{q}}$ instead of $f\left(x\right)$.

<!--
Page 30 of Chapter 0 / Before Calculus,
10th Edition Calculus early transcendentals
Howard Anton, Irl Bivens, Stephen Davis
-->

<!-- $$
\begin{aligned}
x &=
\left(
  1.5, 2.5, 3.5, 4.5
\right) \\
y &=
\left(
  1, 3, 2, 4
\right) \\
\operatorname{graph} &=
\left\{
  \left(
    1.5, 1
  \right),
  \left(
    2.5, 3
  \right),
  \left(
    3.5, 2
  \right),
  \left(
    4.5, 4
  \right)
\right\}
\end{aligned}
$$ -->

:::
::: {.column width="34%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1,3,10-16}, firstline=1, lastline=19]{cpp}{src/2022-05-02/plot/hello-matplotlib.cc}
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

<!-- https://github.com/blitzpp/blitz -->
<!-- https://gmplib.org -->

:::
::: {.column width="50%" align=center}

## [istl Directory Reference](https://dune-project.org/doxygen/2.8.0/dir_076cadbab1aab890d8de2944aa4b23a3.html)

\includegraphics[width=0.36\paperwidth]{src/2022-05-02/dune-istl.png}
:::
::::::::::::::

# [Numerics library](https://en.cppreference.com/w/cpp/numeric)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="62%" align=center}

## [Standard library header `<cmath>`](https://en.cppreference.com/w/cpp/header/cmath)

### Sign function

The sign function of a real number $x$ is a piecewise function which is defined as follows

$$
\operatorname{sign} x\coloneqq
\begin{cases} 
-1 & \text{if } x < 0, \\
0 & \text{if } x = 0, \\
1 & \text{if } x > 0.
\end{cases}
$$

\emoji{open-book} [`std::pow`](https://en.cppreference.com/w/cpp/numeric/math/pow)
raises a number to the given power $\left(x^{y}\right)$.

\emoji{open-book} [`std::sqrt`](https://en.cppreference.com/w/cpp/numeric/math/sqrt)
computes square root $\left(\sqrt{x}\right)$.

\emoji{open-book} [`std::exp`](https://en.cppreference.com/w/cpp/numeric/math/exp)
returns $e$ raised to the given power $\left(e^{x}\right)$.

\emoji{open-book} [`std::log`](https://en.cppreference.com/w/cpp/numeric/math/log)
computes natural (base $e$) logarithm $\left(\ln{x}\right)$.

\emoji{open-book} [`std::abs`](https://en.cppreference.com/w/cpp/numeric/math/abs)
computes absolute value of an integral value $\left(\left|x\right|\right)$.

\emoji{open-book} [`std::log10`](https://en.cppreference.com/w/cpp/numeric/math/log10)
computes common (base 10) logarithm $\left(\log_{10}x\right)$.

:::
::: {.column width="38%" align=center}

## Code snippet

<!-- https://stackoverflow.com/a/4609795 -->

\footnotesize
\inputminted[highlightlines={5-9,15,14-19}, firstline=1, lastline=19]{cpp}{src/2022-05-02/demo/session1.cc}
:::
::::::::::::::

# [Input/output library](https://en.cppreference.com/w/cpp/io)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="55%" align=center}

## [Standard library header `<iomanip>`](https://en.cppreference.com/w/cpp/header/iomanip)

\emoji{open-book} [`std::setprecision`](https://en.cppreference.com/w/cpp/io/manip/setprecision)
changes floating-point precision.

\emoji{open-book} [`std::scientific`](https://en.cppreference.com/w/cpp/io/manip/fixed)
changes formatting used for floating-point I/O.

:::
::: {.column width="45%" align=center}

## Code snippet

<!-- https://stackoverflow.com/a/4609795 -->

\footnotesize
\inputminted[highlightlines={22-23,25-26,28-29,31-32,34-35,37-38}, firstline=21, lastline=38]{cpp}{src/2022-05-02/demo/session1.cc}
:::
::::::::::::::

# [Numerics library](https://en.cppreference.com/w/cpp/numeric)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

## [Standard library header `<cmath>`](https://en.cppreference.com/w/cpp/header/cmath)

### Gamma function and the number $\pi$

- For any positive integer $n$, $\Gamma\left(n\right)=\left(n-1\right)!$.

- For complex numbers with a positive real part, the gamma function is defined via a convergent improper integral:

$$
\begin{aligned}
\Gamma\left(z\right)&\coloneqq
\int\limits_{0}^{\infty}x^{z-1}e^{-x}\,\mathrm{d}x,
\quad\Re\left(z\right) > 0. \\
\pi&\coloneqq
\cos^{-1}\left(-1\right).
\end{aligned}
$$

\emoji{open-book} [`std::tgamma`](https://en.cppreference.com/w/cpp/numeric/math/tgamma)
gamma function.

\emoji{open-book} [`std::acos`](https://en.cppreference.com/w/cpp/numeric/math/acos)
computes arc cosine $\left(\arccos x\right)$.

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={41-52,54-58,60}, firstline=40, lastline=60]{cpp}{src/2022-05-02/demo/session1.cc}
:::
::::::::::::::

# [Utility library](https://en.cppreference.com/w/cpp/utility)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="55%" align=center}

\emoji{open-book} [`std::round`](https://en.cppreference.com/w/c/numeric/math/round)
rounds to nearest integer, rounding away from zero in halfway cases.

\emoji{open-book} [`std::trunc`](https://en.cppreference.com/w/c/numeric/math/trunc)
rounds to nearest integer not greater in magnitude than the given value.

\emoji{open-book} [`std::ceil`](https://en.cppreference.com/w/c/numeric/math/ceil)
computes smallest integer not less than the given value.

\emoji{open-book} [`std::floor`](https://en.cppreference.com/w/c/numeric/math/floor)
computes largest integer not greater than the given value.

\emoji{open-book} [`std::size_t`](https://en.cppreference.com/w/cpp/types/size_t)
unsigned integer type returned by the sizeof operator.

:::
::: {.column width="45%" align=center}

## Code snippet
<!-- 
https://stackoverflow.com/a/4609795
// En matlab son doble precisión por defecto, en octave será igual?
// std::exp es igual que exp?
// https://en.cppreference.com/w/cpp/language/operator_alternative
if (3 < 5 and 4 < 8)
{
  std::cout << "Verdadero" << std::endl;
}
// https://stackoverflow.com/q/1727881
// La precisión por hardware y software
// Los registros de la computadora
std::cout << std::fixed << std::setprecision(20);
std::cout << std::numbers::pi << std::endl;
 -->
\footnotesize
\inputminted[highlightlines={63-64,66-67,69-70,72-75,77-78,80-81}, firstline=62, lastline=84]{cpp}{src/2022-05-02/demo/session1.cc}
:::
::::::::::::::

# [Numerics library](https://en.cppreference.com/w/cpp/numeric)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

## [Standard library header `<complex>`](https://en.cppreference.com/w/cpp/header/complex)

\emoji{open-book} [`std::complex`](https://en.cppreference.com/w/cpp/numeric/complex)
a complex number type.

\footnotesize
```cpp
template <class T>
class complex
```
\normalsize

\emoji{open-book} [`std::literals::complex_literals`](https://en.cppreference.com/w/cpp/numeric/complex/operator%22%22i)
Forms a `std::complex` literal representing an imaginary number.

:::
::: {.column width="50%" align=center}

## Code snippet

<!-- https://en.cppreference.com/w/cpp/numeric/complex -->

\footnotesize
\inputminted[highlightlines={3,8-9,11-12,14-15,18-20,22-23}, firstline=1, lastline=26]{cpp}{src/2022-05-02/demo/complex.cc}
:::
::::::::::::::

# [A modern formatting library `<fmt>`](https://fmt.dev/latest/api.html)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="50%" align=center}

\emoji{open-book} [`fmt::print`](https://fmt.dev/latest/api.html#_CPPv4IDpEN3fmt5printEv13format_stringIDp1TEDpRR1T)

Formats args according to specifications in fmt and writes the output to stdout.

\footnotesize
```cpp
template <typename... T>
void fmt::print(format_string<T...> fmt, T &&...args)
```

\normalsize

\emoji{open-book} [`fmt::print`](https://fmt.dev/latest/api.html#_CPPv4I0DpEN3fmt5printEvRK10text_styleRK1SDpRK4Args)

Formats a string and prints it to stdout using ANSI escape sequences to specify text formatting.

\footnotesize
```cpp
template <typename S, typename... Args>
void fmt::print(const text_style &ts,
                const S &format_str,
                const Args &...args)
```

:::
::: {.column width="50%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={2-3,8-11,14-17,20-24}, firstline=1, lastline=27]{cpp}{src/2022-05-02/demo/exercise1.cc}
:::
::::::::::::::

# [Mathematical constants](https://en.cppreference.com/w/cpp/numeric/constants)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

Is mandatory to setup the `CMakeLists.txt` with

\footnotesize
```cmake
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
```

\normalsize

in order to use the mathematical constants

\emoji{open-book} [`std::numbers::pi`](https://en.cppreference.com/w/cpp/symbol_index/numbers)

\emoji{open-book} [`std::numbers::e`](https://en.cppreference.com/w/cpp/symbol_index/numbers)

\emoji{open-book} [`std::numbers::egamma`](https://en.cppreference.com/w/cpp/symbol_index/numbers)

\emoji{open-book} [`std::numbers::phi`](https://en.cppreference.com/w/cpp/symbol_index/numbers)

:::
::: {.column width="55%" align=center}

## Code snippet

<!-- https://stackoverflow.com/questions/9864125/c11-how-to-alias-a-function -->
<!-- https://stackoverflow.com/questions/14116003/whats-the-difference-between-constexpr-and-const -->

\footnotesize
\inputminted[highlightlines={8,10-13,15-19}, firstline=1, lastline=22]{cpp}{src/2022-05-02/demo/exercise2.cc}
:::
::::::::::::::

# A modern formatting library

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

$$
\begin{aligned}
\operatorname{expr}_{1}
\left(x,y\right)&=
{\left(x^{2} + y^{2}\right)}^{\frac{2}{3}} +
\frac{xy}{y - x} \\
\operatorname{expr}_{2}
\left(x,y\right)&=
\frac{\sqrt{x + y}}{{\left(x - y\right)}^{2}} +
2x^{2} - xy^{2}
\end{aligned}
$$

:::
::: {.column width="55%" align=center}

## Code snippet

<!-- https://stackoverflow.com/questions/9864125/c11-how-to-alias-a-function -->

\footnotesize
\inputminted[highlightlines={8-16,18-26}, firstline=1, lastline=29]{cpp}{src/2022-05-02/demo/exercise3.cc}
:::
::::::::::::::

# [Unit testing framework for C++](https://github.com/catchorg/Catch2/tree/v2.x)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

## [`<catch2>`](https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md#top)

\emoji{open-book} [`TEST_CASE`](https://github.com/catchorg/Catch2/blob/v2.x/docs/test-cases-and-sections.md#test-cases-and-sections)

\footnotesize
```cpp
TEST_CASE( test name [, tags ] )
```

\normalsize

\emoji{open-book} [`REQUIRE`](https://github.com/catchorg/Catch2/blob/v2.x/docs/assertions.md#natural-expressions)

\footnotesize
```cpp
REQUIRE( expression )
```

\normalsize

\emoji{open-book} [`Approx`](https://github.com/catchorg/Catch2/blob/v2.x/docs/assertions.md#floating-point-comparisons)

:::
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1,3,5,7-12,14-18,20-24}, firstline=1, lastline=24]{cpp}{src/2022-05-02/demo/test.cc}
:::
::::::::::::::

# [GitHub Classroom](https://classroom.github.com)

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="45%" align=center}

Actividad [`cmath-example`](https://classroom.github.com/a/_guedErh)
en `src/student.hh`.

:::
::: {.column width="55%" align=center}

## Code snippet

\footnotesize
\inputminted[highlightlines={1}, firstline=1, lastline=23]{cpp}{src/2022-05-02/demo/student.hh}
:::
::::::::::::::
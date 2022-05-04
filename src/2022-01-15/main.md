# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México -1)

- \alert{\texttt{Sat Jan 15 08:00:00 AM -05 2022}}.

- \texttt{Sun Jan 16 09:00:00 AM -05 2022}.

## \emoji{linked-paperclips} Enlaces

- \emoji{small-airplane} Unirse al grupo en Telegram [`https://t.me/joinchat/OsfYP1xnFlxjN2Ix`](https://t.me/joinchat/OsfYP1xnFlxjN2Ix).
- Videoconferencia Zoom permanente [`https://zoom.us/j/97964827725`](https://zoom.us/j/97964827725).

\pause

### \emoji{hammer-and-wrench} Utilidades

- \emoji{keyboard} Mostrar las teclas [`screenkey`](https://gitlab.com/screenkey/screenkey), disponible en \emoji{penguin} GNU/Linux.
- \emoji{crayon} Rayar la pantalla [`gromit-mpx`](https://github.com/bk138/gromit-mpx), disponible en \emoji{penguin} GNU/Linux.
- \emoji{desktop-computer} Telegram desktop [`https://desktop.telegram.org`](https://desktop.telegram.org).

## \emoji{open-mailbox-with-raised-flag} Lista de correos

- [Dune Project](https://dune-project.org/community/mailinglists).
- [Open Porous Media Project](https://opm-project.org/?page_id=358).
- [DUNE for Multi-{Phase, Component, Scale, Physics, …} flow and transport in porous media](https://listserv.uni-stuttgart.de/mailman/listinfo/dumux)
- [The coupling library for partitioned multi-physics simulations](https://mailman.informatik.uni-stuttgart.de/mailman/listinfo/precice).

# \emoji{speech-balloon} Canales de comunicación

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="70%" align=center}

## \emoji{satellite-antenna} Grupo en Telegram DUNE-PDElab Latin Group

- Compartir pantalla.
- Preferir los enlaces que los archivos `$(du -sh file.ext) > 5MiB`.
- Audio grupal.

Más información en [`https://telegram.org/blog/group-video-calls`](https://telegram.org/blog/group-video-calls).

:::
::: {.column width="30%" align=center}
\includegraphics[width=0.3\paperwidth]{src/2022-01-15/telegram.jpeg}
:::
::::::::::::::

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="70%" align=center}

## \emoji{memo} GitHub Discussions

- Adjuntar imágenes.
- Soporta resaltado de sintáxis de C++/Python.
- Debate de ideas.
- Responder preguntas/votar respuestas.
- [`https://github.com/cpp-review-dune/introductory-review/discussions`](https://github.com/cpp-review-dune/introductory-review/discussions).

:::
::: {.column width="30%" align=center}
\includegraphics[width=0.3\paperwidth]{src/2022-01-15/discussions.png}
:::
::::::::::::::

Más información en [`https://docs.github.com/es/discussions`](https://docs.github.com/es/discussions).

# \emoji{file-folder} Agenda $2021$

## Organización del curso virtual [`https://dune-pdelab-course.readthedocs.io`](https://dune-pdelab-course.readthedocs.io) de hace ~$1\frac{1}{2}$ años.

\emoji{small-blue-diamond} [`https://cpp-review-dune.github.io/dune-basics/structure.pdf`](https://cpp-review-dune.github.io/dune-basics/structure.pdf).

## Introducción a DUNE Numerics y sus amigos

\emoji{small-blue-diamond} [`https://cpp-review-dune.github.io/webinar/slides.pdf`](https://cpp-review-dune.github.io/webinar/slides.pdf).

\emoji{small-blue-diamond} [`https://cpp-review-dune.github.io/overview-2021/main.pdf`](https://cpp-review-dune.github.io/overview-2021/main.pdf).

# [DUNE Numerics](https://dune-project.org)

- Vea la historia de los [inicios de DUNE](https://videocampus.sachsen.de/m/90c229be3db7d9c940737d28c666a403eab8975babb73961d0e4c3c55d2e0ef1c015928e3470ebca64bfbb02f225ab83aed7316910c4cb81c087742d3631d545).
- Es modular y extensible.
- Es de código abierto, bajo la licencia GNU Public License version 2 y desarrollado por la Universidad de Heildeberg y otras.
- Se puede instalar de manera manual con [`dunecontrol`](https://gitlab.dune-project.org/core/dune-common/-/raw/master/bin/dunecontrol) (`cmake`, `pkg-config`, etc.), pero está bien mantenida en [FreeBSD 13](https://www.freebsd.org/releases/13.0R/relnotes), [Debian 11](https://www.debian.org/News/2021/20210814) y [Arch Linux](https://archlinux.org/download), o sus derivadas.
- [Solucionadores](https://gitlab.com/amdis/amdis#installation).
- Lector de mallas generados por terceros, por ejemplo con [`python-pygmsh`](https://aur.archlinux.org/packages/python-pygmsh).
- Está desarrollado en C++/Python y permite la creación de nuevos módulos ([`pybind11`](https://archlinux.org/packages/community/any/pybind11)).

# Organización \emoji{books}

1. Introducción a la plataforma `gitpod` (instalar, actualizar, clonar, compilar, editar, buscar, comprimir, descargar (`wget`, `curl`) archivos).
2. Sistema de control de versiones.
3. Matemática numérica de las ecuaciones en derivadas parciales.
4. Programación orientado a objetos (C++/Python) y plantillas.

# Entorno de trabajo: \emoji{spouting-whale} Gitpod + Arch Linux \emoji{penguin}

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="65%" align=center}

- Serverless.
- [Imágenes prediseñadas](https://github.com/orgs/cpp-review-dune/packages) con Dune `v2.8.0` + Python bindings.
- Abundante software (\alert{actualizado}) científico de código abierto.
  - [List of applications/Science, Arch Wiki](https://wiki.archlinux.org/title/List_of_applications/Science).
  - \emoji{smiling-face-with-sunglasses} [Awesome Scientific Computing](https://github.com/nschloe/awesome-scientific-computing).
- Principio [KISS](https://en.wikipedia.org/wiki/KISS_principle).
- 20 años de vida [comunitaria](https://wiki.archlinux.org/title/DeveloperWiki:Governance_And_Decision_Making).
- I use Arch [btw](https://wiki.archlinux.org/title/Arch_Linux#Principles).

:::
::: {.column width="35%" align=center}
\includegraphics[width=0.35\paperwidth]{src/2022-01-15/archlinux.png}
:::
::::::::::::::

# \emoji{rocket} Aplicaciones

- [Extending DUNE: The dune-xt modules](https://arxiv.org/abs/1602.08991).
- [Strategies for the vectorized Block Conjugate Gradients method](https://arxiv.org/pdf/1912.11930.pdf).
- [Hardware-Oriented Krylov Methods for High-Performance Computing](https://arxiv.org/pdf/2104.02494.pdf).
- [Dune-CurvedGrid – A Dune module for surface parametrization](https://arxiv.org/pdf/2009.04938.pdf).
- [A Finite-Volume Moving-Mesh Method for Two-phase Flow in Fracturing Porous Media](https://arxiv.org/pdf/2103.13320.pdf).
- [DuMux 3 – an open-source simulator for solving flow and transport problems in porous media with a focus on model coupling](https://arxiv.org/pdf/1909.05052.pdf).
- [Extendible and Efficient Python Framework for Solving Evolution Equations with Stabilized Discontinuous Galerkin Methods](https://arxiv.org/pdf/2009.13416.pdf).
- [Implementation of hp-adaptive discontinuous finite element methods in Dune-Fem](https://arxiv.org/pdf/1604.07242.pdf).
- [Toward transient finite element simulation of thermal deformation of machine tools in real-time](https://arxiv.org/pdf/1707.03581.pdf).
- y mucho más \ldots

# \emoji{trophy} Objetivos de aprendizaje

1. Ser capaces de seguir los ejemplos del curso [`https://dune-pdelab-course.readthedocs.io`](https://dune-pdelab-course.readthedocs.io).
2. Son sesiones introductorias en las que nos centraremos en C++, CMake, Python, Git, Markdown, \LaTeX{} (para usarlo en sus presentaciones), documentación (doxygen, sphinx).
3. \ldots

# \emoji{glowing-star} Demostración en Gitpod

1. Cree un repositorio llamado \alert{\texttt{<usuario>-comandos}} a partir de la [plantilla](https://github.com/cpp-review-dune/comandos/generate).
2. Ingrese a \alert{\texttt{https://gitpod.io/\#/https://github.com/cpp-review-dune/<usuario>-comandos}}.
3. Abra la terminal, cree un archivo y empuje al servidor remoto con las opciones de `git`: `add`, `commit`, `push` (vea la [ayuda](https://man.archlinux.org/man/gittutorial.7)).
4. Actualice el sistema con \alert{\texttt{sudo pacman -Syyu --noconfirm}}, a continuación instale `python` con \alert{\texttt{sudo pacman -S python}}.

# \emoji{books} Referencias
<!-- # https://gitlab.math.tu-dresden.de/teaching/scprog/so2021 -->
1. [Scientific Programming with C++ in Summer Term 2021](https://gitlab.math.tu-dresden.de/s1140568/wi2019).
2. [DUNE — The Distributed and Unified Numerics Environment, Oliver Sander](https://link.springer.com/book/10.1007/978-3-030-59702-3).
3. [Introduction to Programming with C++ for Engineers, Boguslaw Cyganek](https://ieeexplore.ieee.org/book/9289921).
4. [Object-Oriented Programming for Scientific Computing, Ole Klein](https://conan.iwr.uni-heidelberg.de/data/teaching/oopfsc_ws2020/slides.pdf).
5. [Taller de contribución a Arch Linux, Jesús Castro, Andrea Gómez, Santiago Torres](https://ccoss.org/sessions/w-archlinux).

# Ejemplos

\footnotesize
\inputminted{bash}{src/2022-01-15/commands.sh}

# Ejemplos

\inputminted{cpp}{src/2022-01-15/main.cc}

# Ejemplos

\inputminted{python}{src/2022-01-15/main.py}

<!--
Manuales:

- https://ctan.dcc.uchile.cl/macros/latex/contrib/beamer/doc/beameruserguide.pdf
- https://pandoc.org/MANUAL.pdf
- https://ctan.math.washington.edu/tex-archive/macros/luatex/latex/emoji/emoji-doc.pdf

Enlaces:

- https://github.com/samuelburbulla/dune-mmesh/issues/3
- https://launchpadlibrarian.net/83776282/fenics-book-2011-10-27-final.pdf
- https://www.comsol.de
- https://ondiz.github.io/cursoLatex
-->

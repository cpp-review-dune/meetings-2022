# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México -1)

- \texttt{Sat Jan 15 08:00:00 AM -05 2022}.

- \alert{\texttt{Sun Jan 16 09:00:00 AM -05 2022}}.

# Gitpod

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="70%" align=center}

Desde el navegador web, puede obtener un entorno de desarrollo preconfigurado en un click

```
https://gitpod.io/#<pega aquí la dirección del repositorio>
```

:::
::: {.column width="30%" align=center}
\includegraphics[width=0.3\paperwidth]{src/2022-01-16/open-in-gitpod.png}
:::
::::::::::::::

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="70%" align=center}

Esta vez, utilizaremos un repositorio plantilla generada por [GitHub Classroom](https://classroom.github.com/a/eFj-8U7H), que nos permirá acceder al emulador de terminal de un sistema [GNU/Linux](https://www.gnu.org/gnu/linux-and-gnu.es.html) basado en Arch Linux.

\

Más información acerca de Gitpod.

- [`https://www.gitpod.io/docs/getting-started`](https://www.gitpod.io/docs/getting-started)
- [`https://www.gitpod.io/blog/gitpod-launch`](https://www.gitpod.io/blog/gitpod-launch)

\

Acerca de la jerarquía del sistema de archivos de la Fundación Linux (FHS).

- \emoji{notebook} [`https://man.archlinux.org/man/file-hierarchy.7`](https://man.archlinux.org/man/file-hierarchy.7)

<!--
Acerca de `docker`
- [`https://docs.docker.com/get-started/overview`](https://docs.docker.com/get-started/overview)
- \emoji{notebook} [`https://man.archlinux.org/man/docker-run.1`](https://man.archlinux.org/man/docker-run.1)
  -->

:::
::: {.column width="30%" align=center}
\includegraphics[width=0.3\paperwidth]{src/2022-01-16/gnulinux.png}
:::
::::::::::::::

# [Arch Linux](https://archlinux.org)

## [`pacman`](<https://wiki.archlinux.org/title/Pacman_(Espa%C3%B1ol)>)

- Administrador de paquetes de Arch Linux.
- Frontend de ALPM (ArchLinux Package Manager backend library), escrito en C que maneja la base de datos de los paquetes.
- \emoji{notebook} [`https://man.archlinux.org/man/pacman.8`](https://man.archlinux.org/man/pacman.8).
- [Comparativa con `apt`, `dnf`, `zypper`, `emerge`](<https://wiki.archlinux.org/title/Pacman_(Espa%C3%B1ol)/Rosetta_(Espa%C3%B1ol)>).

## `/etc/pacman.conf`

- Archivo perteneciente al usuario `root` ([UID](https://en.wikipedia.org/wiki/User_identifier) 0).
- Habilita las descargas paralelas.
- Modifica la lista de repositorios.
- \emoji{notebook} [`https://man.archlinux.org/man/core/pacman/pacman.conf.5`](https://man.archlinux.org/man/core/pacman/pacman.conf.5).

## [`makepkg`](<https://wiki.archlinux.org/title/Makepkg_(Espa%C3%B1ol)>)

- Script para la descarga del código fuente, verificación de integridad, construcción de paquetes.
- \emoji{notebook} [`https://man.archlinux.org/man/makepkg.8`](https://man.archlinux.org/man/makepkg.8).

## `/etc/makepkg.conf`

- Archivo perteneciente al usuario `root` ([UID](https://en.wikipedia.org/wiki/User_identifier) 0).
- Modifica las opciones de compilación, algoritmos de compresión.
- \emoji{notebook} [`https://man.archlinux.org/man/core/pacman/makepkg.conf.5`](https://man.archlinux.org/man/core/pacman/makepkg.conf.5).

# [Repositorios oficiales](https://wiki.archlinux.org/title/Official_repositories)

Contamos con los repositorios

- `community(-testing)`: Empaquetado por los [usuarios de confianza](https://archlinux.org/people/trusted-users) (61).
- `core`: Paquetes indispensables para compilar, redes, creación de [sistemas de archivos](<https://wiki.archlinux.org/title/File_systems_(Espa%C3%B1ol)>).
- `extra`: Lenguajes de programación, gestores de ventanas ligeros.
- `kde-unstable`: Versiones beta o release candidate del [framework KDE](https://develop.kde.org/products/frameworks).
- `multilib(-testing)`: Software de 32-bits que funciona en un sistema de 64-bits.
- `testing`: Versiones previas de `core` y `extra`.

[![Package visualization](src/2022-01-16/packages.png)](https://archlinux.org/visualize)

# Arch Linux package statistics a.k.a. `pkgstats`

[![preCICE stats](src/2022-01-16/precice.png)](https://pkgstats.archlinux.de/packages/precice)

# Comandos esenciales I

#### `pwd` \emoji{notebook} [`https://man.archlinux.org/man/pwd.1.es`](https://man.archlinux.org/man/pwd.1.es)

#### `mkdir` \emoji{notebook} [`https://man.archlinux.org/man/mkdir.1`](https://man.archlinux.org/man/mkdir.1)

#### `ls` \emoji{notebook} [`https://man.archlinux.org/man/ls.1.es`](https://man.archlinux.org/man/ls.1.es)

#### `less` \emoji{notebook} [`https://man.archlinux.org/man/less.1`](https://man.archlinux.org/man/less.1)

#### `cd` \emoji{notebook} [`https://man.archlinux.org/man/cd.n`](https://man.archlinux.org/man/cd.n)

#### `mkdir` \emoji{notebook} [`https://man.archlinux.org/man/mkdir.1`](https://man.archlinux.org/man/mkdir.1)

#### `find` \emoji{notebook} [`https://man.archlinux.org/man/find.1`](https://man.archlinux.org/man/find.1)

#### `whoami` \emoji{notebook} [`https://man.archlinux.org/man/whoami.1.es`](https://man.archlinux.org/man/whoami.1.es)

#### `tar` \emoji{notebook} [`https://man.archlinux.org/man/tar.1`](https://man.archlinux.org/man/tar.1)

#### `gzip` \emoji{notebook} [`https://man.archlinux.org/man/gzip.1`](https://man.archlinux.org/man/gzip.1)

#### `chown` \emoji{notebook} [`https://man.archlinux.org/man/chown.1`](https://man.archlinux.org/man/chown.1)

#### `chmod` \emoji{notebook} [`https://man.archlinux.org/man/chmod.1`](https://man.archlinux.org/man/chmod.1)

#### `tldr` \emoji{notebook} [`https://man.archlinux.org/man/tldr.1`](https://man.archlinux.org/man/tldr.1)

# Comandos esenciales II

#### `curl` \emoji{notebook} [`https://man.archlinux.org/man/curl.1`](https://man.archlinux.org/man/curl.1)

#### `neofetch` \emoji{notebook} [`https://man.archlinux.org/man/neofetch.1`](https://man.archlinux.org/man/neofetch.1)

#### `head` \emoji{notebook} [`https://man.archlinux.org/man/head.1.es`](https://man.archlinux.org/man/head.1.es)

#### `tail` \emoji{notebook} [`https://man.archlinux.org/man/tail.1.es`](https://man.archlinux.org/man/tail.1.es)

#### `time` \emoji{notebook} [`https://man.archlinux.org/man/time.1.es`](https://man.archlinux.org/man/time.1.es)

#### `sudo` \emoji{notebook} [`https://man.archlinux.org/man/sudo.8`](https://man.archlinux.org/man/sudo.8)

#### `top` \emoji{notebook} [`https://man.archlinux.org/man/top.1`](https://man.archlinux.org/man/top.1)

#### `du` \emoji{notebook} [`https://man.archlinux.org/man/du.1`](https://man.archlinux.org/man/du.1)

#### `free` \emoji{notebook} [`https://man.archlinux.org/man/free.1`](https://man.archlinux.org/man/free.1)

#### `ld.so` \emoji{notebook} [`https://man.archlinux.org/man/ld.so.8.es`](https://man.archlinux.org/man/ld.so.8.es)

#### `echo` \emoji{notebook} [`https://man.archlinux.org/man/echo.1`](https://man.archlinux.org/man/echo.1)

#### `printf` \emoji{notebook} [`https://man.archlinux.org/man/printf.1`](https://man.archlinux.org/man/printf.1)

#### `link` \emoji{notebook} [`https://man.archlinux.org/man/link.1.es`](https://man.archlinux.org/man/link.1.es)

# Comandos esenciales III

#### `ln` \emoji{notebook} [`https://man.archlinux.org/man/ln.1.es`](https://man.archlinux.org/man/ln.1.es)

#### `rm` \emoji{notebook} [`https://man.archlinux.org/man/rm.1.es`](https://man.archlinux.org/man/rm.1.es)

#### `rmdir` \emoji{notebook} [`https://man.archlinux.org/man/rmdir.1.es`](https://man.archlinux.org/man/rmdir.1.es)

#### `cp` \emoji{notebook} [`https://man.archlinux.org/man/cp.1.es`](https://man.archlinux.org/man/cp.1.es)

#### `mv` \emoji{notebook} [`https://man.archlinux.org/man/mv.1.es`](https://man.archlinux.org/man/mv.1.es)

#### `base64` \emoji{notebook} [`https://man.archlinux.org/man/base64.1.es`](https://man.archlinux.org/man/base64.1.es)

#### `cat` \emoji{notebook} [`https://man.archlinux.org/man/cat.1.es`](https://man.archlinux.org/man/cat.1.es)

#### `cut` \emoji{notebook} [`https://man.archlinux.org/man/cut.1.es`](https://man.archlinux.org/man/cut.1.es)

#### `date` \emoji{notebook} [`https://man.archlinux.org/man/date.1.es`](https://man.archlinux.org/man/date.1.es)

<!-- #### `seq` \emoji{notebook} [`https://man.archlinux.org/man/seq.1.es`](https://man.archlinux.org/man/seq.1.es) -->

<!-- #### `bc` \emoji{notebook} [`https://man.archlinux.org/man/bc.1`](https://man.archlinux.org/man/bc.1) -->

<!-- #### `mc` \emoji{notebook} [`https://man.archlinux.org/man/mc.1`](https://man.archlinux.org/man/mc.1) -->

<!-- #### `bat` \emoji{notebook} [`https://man.archlinux.org/man/bat.1`](https://man.archlinux.org/man/bat.1) -->

<!-- #### `su` \emoji{notebook} [`https://man.archlinux.org/man/su.1`](https://mahn.archlinux.org/man/su.1) -->

<!-- #### `doas` \emoji{notebook} [`https://man.archlinux.org/man/doas.1`](https://man.archlinux.org/man/doas.1) -->

# Comandos requeridos para DUNE

#### `cmake` \emoji{notebook} [`https://man.archlinux.org/man/cmake.1`](https://man.archlinux.org/man/cmake.1)

<!--
Tutorial https://cmake.org/cmake/help/latest/guide/tutorial/index.html
 -->

<!--
$ curl wttr.in
curl https://api.telegram.org/bot123456:ABC-DEF1234ghIkl-zyx57W2v1u123ew11/sendMessage?chat_id=1234&text=hi
-->

#### `mpirun` \emoji{notebook} [`https://man.archlinux.org/man/mpirun.1`](https://man.archlinux.org/man/mpirun.1)

#### `timeout` \emoji{notebook} [`https://man.archlinux.org/man/timeout.1.es`](https://man.archlinux.org/man/timeout.1.es)

#### `tee` \emoji{notebook} [`https://man.archlinux.org/man/tee.1.es`](https://man.archlinux.org/man/tee.1.es)

#### `diff` \emoji{notebook} [`https://man.archlinux.org/man/diff.1.es`](https://man.archlinux.org/man/diff.1.es)

#### `env` \emoji{notebook} [`https://man.archlinux.org/man/env.1.es`](https://man.archlinux.org/man/env.1.es)

#### `valgrind` \emoji{notebook} [`https://man.archlinux.org/man/valgrind.1`](https://man.archlinux.org/man/valgrind.1)

#### `ldd` \emoji{notebook} [`https://man.archlinux.org/man/ldd.1.es`](https://man.archlinux.org/man/ldd.1.es)

#### `file` \emoji{notebook} [`https://man.archlinux.org/man/file.1`](https://man.archlinux.org/man/file.1)

## Ver más

- [OpenSSL](https://www.openssl.org)
- [OpenSSH](https://www.openssh.com)
- [OpenPGP](https://www.openpgp.org)

<!-- pacman -S asciiquarium -->

<!--
#### `emacs`

#### `tmux`
 -->

<!-- yay -S pokemon-colorscripts-git -->

<!-- https://code.visualstudio.com/docs/languages/cpp -->

<!-- https://code.visualstudio.com/shortcuts/keyboard-shortcuts-linux.pdf -->

# Compiladores y lenguajes de programación

#### `python` \emoji{notebook} [`https://man.archlinux.org/man/python3.10.1.en`](https://man.archlinux.org/man/python3.10.1.en)

<!--
$ python -c 'import __hello__'
$ python -c 'import this'
 -->

#### `rustc` \emoji{notebook} [`https://man.archlinux.org/man/extra/rust/rustc.1.en`](https://man.archlinux.org/man/extra/rust/rustc.1.en)

#### `go` \emoji{notebook} [`https://man.archlinux.org/man/go.1`](https://man.archlinux.org/man/go.1)

#### `octave` \emoji{notebook} [`https://man.archlinux.org/man/octave.1`](https://man.archlinux.org/man/octave.1)

#### `luatex` \emoji{notebook} [`https://man.archlinux.org/man/extra/texlive-bin/luatex.1.en`](https://man.archlinux.org/man/extra/texlive-bin/luatex.1.en)

#### `awk` \emoji{notebook} [`https://man.archlinux.org/man/awk.1p`](https://man.archlinux.org/man/awk.1p)

#### `julia` \emoji{notebook} [`https://man.archlinux.org/man/julia.1`](https://man.archlinux.org/man/julia.1)

#### `gnuplot` \emoji{notebook} [`https://man.archlinux.org/man/gnuplot.1`](https://man.archlinux.org/man/gnuplot.1)

#### `lua` \emoji{notebook} [`https://man.archlinux.org/man/lua.1`](https://man.archlinux.org/man/lua.1)

#### `gfortran` \emoji{notebook} [`https://man.archlinux.org/man/core/gcc-fortran/gfortran.1.en`](https://man.archlinux.org/man/core/gcc-fortran/gfortran.1.en)

#### `gcc` \emoji{notebook} [`https://man.archlinux.org/man/gcc.1`](https://man.archlinux.org/man/gcc.1)

#### `g++` \emoji{notebook} [`https://man.archlinux.org/man/g++.1`](https://man.archlinux.org/man/g++.1)

# Actividades \emoji{film-frames}

#### `asciinema` \emoji{notebook} [`https://man.archlinux.org/man/asciinema.1`](https://man.archlinux.org/man/asciinema.1)

1. Cree una cuenta en [`https://asciinema.org`](https://asciinema.org).
2. Vea la ayuda de `asciinema` y reproduzca el vídeo.
3. Instale `tldr` y lea el manual de algunos comandos.
4. Descomprima el _tarball_ [`dune-pdelab-master.tar.gz`](https://gitlab.dune-project.org/pdelab/dune-pdelab/-/archive/master/dune-pdelab-master.tar.gz), inicialice el repositorio, instale `bat` y vea algunos archivos del código fuente.

\footnotesize

```console
$ MODULE=dune-pdelab
$ BRANCH=master
$ UPSTREAM_URL=https://gitlab.${MODULE/-*}-project.org/${MODULE:5:8}/$MODULE/-/archive/$BRANCH/$MODULE-$BRANCH.tar.gz
$ curl -O $UPSTREAM_URL
$ tar -xvf $MODULE-$BRANCH.tar.gz
```

<!-- @### `cowsay` \emoji{notebook} [`https://man.archlinux.org/man/cowsay.1`](https://man.archlinux.org/man/cowsay.1) -->

<!-- #### `ponysay` \emoji{notebook} [`https://man.archlinux.org/man/ponysay.6`](https://man.archlinux.org/man/ponysay.6) -->

<!-- #### `wc` \emoji{notebook} [`https://man.archlinux.org/man/wc.1.es`](https://man.archlinux.org/man/wc.1.es) -->

<!-- #### `yes` \emoji{notebook} [`https://man.archlinux.org/man/yes.1.es`](https://man.archlinux.org/man/yes.1.es) -->

<!-- #### `difftime` \emoji{notebook} [`https://man.archlinux.org/man/difftime.3.es`](https://man.archlinux.org/man/difftime.3.es) -->

<!-- #### `getw` \emoji{notebook} [`https://man.archlinux.org/man/getw.3.es`](https://man.archlinux.org/man/getw.3.es) -->

<!-- #### `tanh` \emoji{notebook} [`https://man.archlinux.org/man/tanh.3.es`](https://man.archlinux.org/man/tanh.3.es) -->

<!-- #### `shells` \emoji{notebook} [`https://man.archlinux.org/man/shells.5.es`](https://man.archlinux.org/man/shells.5.es) -->

<!-- #### `kill` \emoji{notebook} [`https://man.archlinux.org/man/kill.1`](https://man.archlinux.org/man/kill.1) -->

# `asciinema`

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="55%" align=center}

Dentro de gitpod

1. Instale [`asciinema`](https://archlinux.org/packages/community/any/asciinema) con \alert{\texttt{sudo pacman -S asciinema}}.
2. Vea la ayuda de las opciones `rec`, `play`, `upload`.

:::
::: {.column width="45%" align=center}
\includegraphics[width=0.45\paperwidth]{src/2022-01-16/asciinema.png}
:::
::::::::::::::

# Ejemplos

\footnotesize
\inputminted[firstline=1, lastline=31]{bash}{src/2022-01-16/commands.sh}

# Ejemplos

\footnotesize
\inputminted[firstline=32, lastline=62]{bash}{src/2022-01-16/commands.sh}

# Ejemplos

\footnotesize
\inputminted[firstline=63, lastline=93]{bash}{src/2022-01-16/commands.sh}

# Ejemplos

\footnotesize
\inputminted[firstline=94, lastline=124]{bash}{src/2022-01-16/commands.sh}

# Ejemplos

\footnotesize
\inputminted[firstline=125, lastline=154]{bash}{src/2022-01-16/commands.sh}

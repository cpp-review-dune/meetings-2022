# \emoji{calendar} Cronograma de esta semana

## `$ date` (\emoji{flag-peru} Lima, \emoji{flag-colombia} Bogotá, \emoji{flag-mexico} Ciudad de México -1)

- \texttt{Sat Jan 15 08:00:00 AM -05 2022}.

- \alert{\texttt{Sun Jan 16 09:00:00 AM -05 2022}}.

## \emoji{linked-paperclips} Enlaces

- \emoji{page-with-curl} Apuntes en las sesiones [`https://yopad.eu/p/2022-01-16-dune-365days`](https://yopad.eu/p/2022-01-16-dune-365days).
- \emoji{small-airplane} Unirse al grupo en Telegram [`https://t.me/joinchat/OsfYP1xnFlxjN2Ix`](https://t.me/joinchat/OsfYP1xnFlxjN2Ix).
- Videoconferencia Zoom permanente [`https://zoom.us/j/97964827725`](https://zoom.us/j/97964827725).

# Gitpod

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="70%" align=center}

Para ingresar a Gitpod, pegamos en la pestaña del navegador

```
https://gitpod.io/#<pega aquí la dirección del repositorio>
```

:::
::: {.column width="30%" align=center}
\includegraphics[width=0.3\paperwidth]{src/2022-01-16/open-in-gitpod.png}
:::
::::::::::::::

Esta vez, utilizaremos un repositorio plantilla generada por [GitHub Classroom](https://github.com/cpp-review-dune/comandos), que nos permirá acceder al emulador de terminal de un sistema [GNU/Linux](https://www.gnu.org/gnu/linux-and-gnu.es.html).

:::::::::::::: {.columns align=center totalwidth=8em}
::: {.column width="70%" align=center}

Más información acerca de Gitpod en

- [`https://www.gitpod.io/docs/getting-started`](https://www.gitpod.io/docs/getting-started)
- [`https://www.gitpod.io/blog/gitpod-launch`](https://www.gitpod.io/blog/gitpod-launch)

:::
::: {.column width="30%" align=center}
\includegraphics[width=0.3\paperwidth]{src/2022-01-16/gnulinux.png}
:::
::::::::::::::

# [Arch Linux](https://archlinux.org)

## [`pacman`](<https://wiki.archlinux.org/title/Pacman_(Espa%C3%B1ol)>)

- Administrador de paquetes de Arch Linux.
- Frontend de ALPM (ArchLinux Package Manager backend library), escrito en C que maneja la base de datos de los paquetes.
- Manual [`https://man.archlinux.org/man/pacman.8`](https://man.archlinux.org/man/pacman.8).
- [Comparativa con `apt`, `dnf`, `zypper`, `emerge`](<https://wiki.archlinux.org/title/Pacman_(Espa%C3%B1ol)/Rosetta_(Espa%C3%B1ol)>).

## `/etc/pacman.conf`

- Archivo perteneciente al usuario root.
- Habilitar descargar paralelas.
- Modificar la lista de repositorios.
- Manual [`https://man.archlinux.org/man/core/pacman/pacman.conf.5`](https://man.archlinux.org/man/core/pacman/pacman.conf.5).

## [`makepkg`](<https://wiki.archlinux.org/title/Makepkg_(Espa%C3%B1ol)>)

- Script para la descarga del código fuente, verificación de integridad, construcción de paquetes.
- Manual [`https://man.archlinux.org/man/makepkg.8`](https://man.archlinux.org/man/makepkg.8).

## `/etc/makepkg.conf`

- Archivo perteneciente al usuario root.
- Modificar las opciones de compilación, algoritmos de compresión.
- Manual [`https://man.archlinux.org/man/core/pacman/makepkg.conf.5`](https://man.archlinux.org/man/core/pacman/makepkg.conf.5).

# [Repositorios oficiales](https://wiki.archlinux.org/title/Official_repositories)

Contamos con los repositorios

- `community(-testing)`: Empaquetado por los [usuarios de confianza](https://archlinux.org/people/trusted-users) (61).
- `core`: Paquetes indispensables para compilar, redes, creación de sistemas de archivos.
- `extra`: Lenguajes de programación, gestores de ventanas ligeros.
- `kde-unstable`: Versiones beta o release candidate del framework KDE.
- `multilib(-testing)`: Software de 32-bits que funciona en un sistema de 64-bits.
- `testing`: Versiones previas de `core` y `extra`.

[![Package visualization](src/2022-01-16/packages.png)](https://archlinux.org/visualize)

# Arch Linux package statistics a.k.a. `pkgstats`

[![preCICE stats](src/2022-01-16/precice.png)](https://pkgstats.archlinux.de/packages/precice)

# Comandos esenciales

## `ls` [`https://man.archlinux.org/man/ls.1.es`](https://man.archlinux.org/man/ls.1.es)

## `cd` [`https://man.archlinux.org/man/cd.n`](https://man.archlinux.org/man/cd.n)

## mkdir [`https://man.archlinux.org/man/mkdir.1`](https://man.archlinux.org/man/mkdir.1)

## find [`https://man.archlinux.org/man/find.1`](https://man.archlinux.org/man/find.1)

## `whoami` [`https://man.archlinux.org/man/whoami.1.es`](https://man.archlinux.org/man/whoami.1.es)

## `tldr` [`https://man.archlinux.org/man/tldr.1`](https://man.archlinux.org/man/tldr.1)

## python [`https://man.archlinux.org/man/python3.10.1.en`](https://man.archlinux.org/man/python3.10.1.en)

<!--
$ python -c 'import __hello__'
$ python -c 'import this'
 -->

# Comandos requeridos para DUNE

## `cmake` [`https://man.archlinux.org/man/cmake.1`](https://man.archlinux.org/man/cmake.1)

<!--
Tutorial https://cmake.org/cmake/help/latest/guide/tutorial/index.html
 -->

## `curl` [`https://man.archlinux.org/man/curl.1`](https://man.archlinux.org/man/curl.1)

<!--
$ curl wttr.in
curl https://api.telegram.org/bot123456:ABC-DEF1234ghIkl-zyx57W2v1u123ew11/sendMessage?chat_id=1234&text=hi
-->

## `asciinema` [`https://man.archlinux.org/man/asciinema.1`](https://man.archlinux.org/man/asciinema.1)

## `neofetch` [`https://man.archlinux.org/man/neofetch.1`](https://man.archlinux.org/man/neofetch.1)

## Git [`https://man.archlinux.org/man/git.1`](https://man.archlinux.org/man/git.1)

<!--
https://git-scm.com/docs/gittutorial
 -->

## Ver más

- [OpenSSL](https://www.openssl.org)
- [OpenSSH](https://www.openssh.com)
- [OpenPGP](https://www.openpgp.org)

<!-- pacman -S asciiquarium -->

## head

## tail

https://man.archlinux.org/man/su.1

https://man.archlinux.org/man/doas.1

https://man.archlinux.org/man/sudo.8

## emacs

## tmux

https://man.archlinux.org/man/top.1

https://man.archlinux.org/man/du.1

https://man.archlinux.org/man/free.1

https://man.archlinux.org/man/mpirun.1

https://man.archlinux.org/man/julia.1

https://man.archlinux.org/man/gnuplot.1

https://man.archlinux.org/man/lua.1

https://man.archlinux.org/man/core/gcc-fortran/gfortran.1.en

https://man.archlinux.org/man/gcc.1

https://man.archlinux.org/man/g++.1

https://man.archlinux.org/man/ld.so.8.es

https://man.archlinux.org/man/awk.1p

https://man.archlinux.org/man/octave.1

https://man.archlinux.org/man/bc.1

https://man.archlinux.org/man/mc.1

https://man.archlinux.org/man/extra/texlive-bin/luatex.1.en

https://man.archlinux.org/man/cowsay.1

https://man.archlinux.org/man/ponysay.6

https://man.archlinux.org/man/bat.1

https://man.archlinux.org/man/echo.1

https://man.archlinux.org/man/printf.1

https://man.archlinux.org/man/extra/rust/rustc.1.en

https://man.archlinux.org/man/go.1

yay -S pokemon-colorscripts-git

https://man.archlinux.org/man/diff.1.es

https://code.visualstudio.com/docs/languages/cpp

https://code.visualstudio.com/shortcuts/keyboard-shortcuts-linux.pdf

https://man.archlinux.org/man/tar.1

https://man.archlinux.org/man/gzip.1

https://man.archlinux.org/man/chown.1

https://man.archlinux.org/man/chmod.1

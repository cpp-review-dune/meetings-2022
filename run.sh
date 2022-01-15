#!/usr/bin/env bash

pandoc src/*.md -t beamer -V lang=es --pdf-engine=lualatex -o 2022-01-15.pdf #--bibliography src/bib.bib --toc --toc-depth=2
if [ -e /etc/debian_version ]; then
  okular main.pdf
elif [ -e /etc/arch-release ]; then
  zathura main.pdf
fi

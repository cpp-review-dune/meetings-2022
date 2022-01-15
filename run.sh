#!/usr/bin/env bash

PDF=2022-01-15.pdf

pandoc src/*.md -t beamer -V lang=es --pdf-engine=lualatex -o $PDF #--bibliography src/bib.bib --toc --toc-depth=2
if [ -e /etc/debian_version ]; then
  okular $PDF
elif [ -e /etc/arch-release ]; then
  zathura $PDF
fi

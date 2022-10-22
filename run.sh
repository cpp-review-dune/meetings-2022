#! /usr/bin/env bash

DATE=2022-10-23
ENGINE=lualatex
# DATE=$(date -u +"%Y-%m-%d")

pandoc src/$DATE/*.md -t beamer -V lang=es --pdf-engine=$ENGINE --pdf-engine-opt=-shell-escape -o $DATE.pdf # --bibliography src/$DATE/bib.bib --toc --toc-depth=2

if [ -e /etc/debian_version ]; then
  okular $DATE.pdf &
elif [ -e /etc/arch-release ]; then
  zathura $DATE.pdf &
fi

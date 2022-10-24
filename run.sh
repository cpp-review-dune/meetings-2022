#! /usr/bin/env bash

DATE=2022-10-23
ENGINE=lualatex
# DATE=$(date -u +"%Y-%m-%d")

if [ -e src/$DATE/biblio.bib ]; then
  pandoc src/$DATE/*.md \
    -t beamer \
    -V lang=es \
    --pdf-engine=$ENGINE \
    --pdf-engine-opt=-shell-escape \
    --bibliography src/$DATE/biblio.bib \
    --citeproc \
    -o $DATE.pdf # --toc --toc-depth=2
else
  pandoc src/$DATE/*.md \
    -t beamer \
    -V lang=es \
    --pdf-engine=$ENGINE \
    --pdf-engine-opt=-shell-escape \
    -o $DATE.pdf # --toc --toc-depth=2
fi

if [ -e /etc/debian_version ]; then
  okular $DATE.pdf &
elif [ -e /etc/arch-release ]; then
  zathura $DATE.pdf &
fi

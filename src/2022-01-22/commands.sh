git config
git config --list
git config --global user.name "Name"
git config --list
cd
whoami
mkdir -p Git
ls
pwd
# Primero ubicarse en el home del usuario /home/usuario
echo $USER
whoami
cd
cd /
pwd
ls
cd
pwd
mkdir -p Git/Hub
ls
ls Git/
cd Git/Hub/
ls
git init
git status
git config --global init.defaultBranch main
ls
git status
cd ..
ls
mkdir usuario
cd usuario
git init
git status
cd ..
ls
mkdir ramas
cd ramas/
pwd
cd
ls
cd Git/
ls
cd Hub/
git status
cd ..
ls
cd usuario
git status
cd ..
cd ramas/
git status
git init -b rama
git status
#origin/rama
#origin/master
#origin/main
sudo pacman -Sy
pacman -Ss github-cli
pacman -Si github-cli
git clone https://github.com/numpy/numpy.git
ls
cd numpy
git branch
git branch --list
git branch -a
pwd
cd
ls
pwd
git status
git branch -a
ls
mkdir src
touch README.md
git status
git add README.md
git add src
git status
git commit
ls -l
# r w x 4 2 1
# 6 4 4
ls -l src/
ls -lh src/
git status
git commit
git add .gitignore
git commit -m "Add .gitignore"
git status
git add src/vectores.cc
git commit -m "Create vectores.cc"
git status
git log
HASH_COMMIT=f5a1124eba1bf89e2baa65fc483b4b76146ae9be
git show $HASH_COMMIT^!
git status
git add src/vectores.cc
git commit -m "Change to float from integers"
git log

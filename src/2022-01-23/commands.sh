cd
ls
pwd
ls
mkdir cmake-tutorial
cd cmake-tutorial
git status
git init
git status
cmake
sudo pacman -Syyu cmake --noconfirm
ls
cd ..
cmake -S cmake-tutorial -B build
ls
pwd
ls cmake-tutorial
cmake --build build
cd build
make help
make
ls
./build/src/main
cd cmake-tutorial
git status
cmake -S . -B build
cd build
ls
make
cd src/
ls
./main
cd ..
git add .gitignore src/ CMakeLists.txt
git status
git commit -m "New CMake Project"
git remote add origin https://github.com/cpp-review-dune/usuario-cmake-basics.git
git push origin master
pwd
cmake --help-command find_package | less
sudo pacman -Syyu eigen --noconfirm
pacman -Ql eigen
pacman -Qi eigen

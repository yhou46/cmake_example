# cmake_example01
2 CMakeLists.txt file in root and root/src

all source files(*.cpp, *.h) should be placed under root/src

To create mk file:
1. in root/, "mkdir ./build"
2. "cd build"
3. run "cmake ../"

After creating mk file, to build executable:
In root/build
"cmake --build ./" to create executable; executable is in "build/bin" directory

By default, CMakeLists.txt in src will include all source files

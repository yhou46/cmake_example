# cmake_example01
2 CMakeLists.txt file in root and root/src

all source files(*.cpp, *.h) should be placed under root/

There is no src folder and we need only one CMakeLists.txt

To create mk file:
1. in "root/" (in this case, root is example1/ ), run "mkdir ./build"
2. "cd build"
3. run "cmake ../"

After creating mk file, to build executable:
In root/build:

run "cmake --build ./" to create executable;

executable is in "build/bin" directory

By default, CMakeLists.txt in src will include all source files

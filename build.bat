@echo off
mkdir build
pushd build
cl ../src/main.cpp
main.exe
popd
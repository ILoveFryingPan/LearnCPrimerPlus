@echo off
gcc -o %1 %2
%1
del %1.exe
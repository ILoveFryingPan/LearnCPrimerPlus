
@echo off
gcc -o %1 %1.c
%1
del %1.exe
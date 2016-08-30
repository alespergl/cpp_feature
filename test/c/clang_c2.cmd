@echo off
setlocal

set opts=-std=c++1z -pedantic-errors -fno-ms-compatibility -fexceptions -fsized-deallocation

if "%1"=="" (
    clang --version
    echo.
    echo %opts%
    exit /b
)

set out=%2
if "%out%"=="" set out=%~n1.exe

clang %1 %opts% -I "%~dp0..\..\include" -o "%out%"
